# **수평적 관계와 집합 관계<br>**
## Today's Topic: Chapter 8(8.1~8.2)<br><br>

### **Friend 함수<br>**
friend 예약어를 통해 함수와 클래스를 각각 friend 함수와 friend 클래스로 선언할 수 있다.<br>
```
    friend class <class_name>; // friend 클래스 선언
    friend <function_name>;    // friend 함수 선언
```
<br>friend로 선언한 함수나 클래스는 **접근 제어 지시자의 영향을 받지 않는다.**<br>

```
class A{
    int data = 0;
    public:
    ...
    friend void printData(const A &); // friend 함수 선언
};

void printData(const A &a){
    cout << a.data << endl;
}

void main(){
    A a(5);
    printData(a);
}
```
```
>>>5
```
printData() 함수의 정의를 보면 이 함수는 클래스 A의 메서드가 아님을 알 수 있다.<br>
따라서 private 멤버 변수인 data에 직접 접근이 불가능한 것이 당연하다.<br>
그러나 소스를 실행해보면 컴파일 에러가 뜨지 않을 뿐 아니라 값도 정확히 출력된다.<br>
이는 friend 예약어를 통해 printData()함수가 friend 함수로 선언되었기 때문으로,<br>
friend 관계인 클래스 A의 private 멤버 변수 data에도 직접 접근이 가능해졌다.<br><br>

즉, 서로 친구 관계인 둘은 접근 제어 지시자의 영향을 받지 않고 모든 멤버에 접근이 가능하다.<br><br><br>

### **Friend 클래스<br>**
함수 외에 클래스도 friend 예약어를 선언할 수 있다.<br>
friend 함수와 마찬가지로 friend 선언된 클래스는 접근 제어 지시자의 영향을 받지 않고 모든 메서드에 접근이 허용된다.<br><br>

다음은 friend 클래스의 사용 예시이다.<br>
```
#include <iostream>
using namespace std;

class CNode{
    friend class CList;
public:
    explicit CNode(const char *name){
        strcpy_s(this->name, sizeof(this->name), name);
    }
private:
    char name[32];
    CNode *next = nullptr;
};

class CList{
    CNode headNode;
public:
    CList() : headNode("Dummy Head") { }
    ~CList(){
        CNode *pNode = headNode.next;
        CNode *pDelete = nullptr;
        while(pNode){
            pDelete = pNode;
            pNode = pNode->next;
            cout<< pDelete->name << endl;
            delete pDelete;
        }

        headNode.Next = nullptr;
    }
    
    void addNewNode(cnost char *name){
        CNode *pNode = new CNode(name);
        pNode->next = headNode.next;
        headNode.next = pNode;
    }
};

void main(){
    CList list;
    list.addNewNode("길동");
    list.addNewNode("철수");
    list.addNewNode("영희");
}
```
위의 소스는 C의 연결 리스트(linked list)를 C++ 클래스로 구현한 것이다.<br>
클래스 CNode와 CList는 friend 관계이기 때문에 CList 에서 CNode의 private 멤버 변수에 직접 접근이 가능하다.<br>
만약 둘이 상속 관계라면 CList에서 CNode의 private 멤버 변수에 접근하는 메서드가 추가로 정의되어야 한다.<br><br>

<img width="100%" src="https://user-images.githubusercontent.com/83760210/130345736-034a85f0-93df-4c4e-99ec-b540713c7b9c.png">
연결리스트란 위와 같이 데이터를 담은 노드가 서로 연결되어 있는 자료형을 말한다.<br>
C언어에서는 구조체를 활용한 연결리스트를 사용하는데, 구조체의 멤버 변수로 다음 노드를 가리키는 포인터 변수가 있다는게 특징이다.<br>
노드를 추가할 때는 새로운 메모리를 할당한 후 그 메모리를 리스트 마지막 요소의 포인터 변수로 지정해주면 된다.<br>
연결 리스트를 사용하면 기존 배열의 여러 문제점들(크기 유동적으로 지정, 요소 추가, 삭제)를 해결할 수 있다.<br><br><br>

### **Composition 관계<br>**
지금 부터 다룰 것은 클래스의 집합 관계이다.<br>
집합 관계란 여럿이 모여 새로운 하나를 이루는 경우를 말하는 것으로, Composition과 Aggregation 두 경우로 나뉜다.<br>
Composition 관계란 서로가 구성 요소인 관계를 의미한다.<br>
이 경우 여러 클래스들이 모여 만들어진 클래스의 객체가 소멸하면 그 구성 요소들도 모두 함께 소멸한다는 특징이 있다.<br><br>

다음은 Composition 관계의 예시이다.<br>
```
#include <iostream>
using namespace std;

class CNode{
    friend class CList;
public:
    explicit CNode(const char *name){
        strcpy_s(this->name, sizeof(this->name), name);
    }
private:
    char name[32];
    CNode *next = nullptr;
};

class CList{
    CNode headNode;
public:
    CList() : headNode("Dummy Head") { }
    ~CList(){
        CNode *pNode = headNode.next;
        CNode *pDelete = nullptr;
        while(pNode){
            pDelete = pNode;
            pNode = pNode->next;
            cout<< pDelete->name << endl;
            delete pDelete;
        }

        headNode.Next = nullptr;
    }
    
    void addNewNode(cnost char *name){
        CNode *pNode = new CNode(name);
        pNode->next = headNode.next;
        headNode.next = pNode;
    }

    void print(){
        CNode *pNode = headNode.next;
        while(pNode){
            cout << pNode->name << endl;
            pNode = pNode->next;
        }
    }
};

class UI{
    CList m_list;
public:
    int printMenu(){
        System("cls"); // cmd clear
        cout << "[1]Add\t" << "[2]Print\t" << "[0]Exit\n:";
        cout.flush() // buffer clear
        int input = 0;
        cin >> input;
        return input;
    }

    void run(){
        char name[32];
        int input = 0;
        while((input = printMenu()) > 0){
            switch(input){
            case1:
                cout << "이름: ";
                cout.flush();
                cin >> name;
                m_list.addNewNode(name);
                break;
            case2:
                m_list.print();
                break;
            default:
                break;
            }
        }
    }
}

void main(){
    UI ui;
    ui.run();
}
```
```
>>>[1]Add   [2]Print    [0]Exit
>>>:1
>>>이름: 홍길동
```
CNode 클래스는 위와 동일하다. CList 클래스는 print()라는 함수가 추가되었다.<br>
여기서 주목할 것은 UI 클래스이다.<br>
UI 클래스는 메뉴를 출력하고 사용자의 입력에 따라 기능을 수행한다.<br>
그런데 UI 클래스는 CList 클래스의 인스턴스를 멤버 데이터로 가지고 있다<br>
즉, UI 클래스의 객체가 생성되면 CList의 객체도 같이 생겨나며, 소멸 또한 함께 소멸된다.<br>
이러한 경우를 Composition 관계라고 한다.<br><br><br>

### **Aggregation 관계<br>**
Aggregation 관계는 Composition 관계와 달리 객체가 소멸할 때 구성 요소들은 소멸되지 않는다.<br>
Aggregation 관계는 모두 모여 하나의 시스템을 이루지만 각각 개별적으로 분리되어 독립적으로 활동하기 때문이다.<br><br>

다음은 Aggregation 관계의 예시이다.<br>
```
...
class UI{
    CList &m_list;
public:
    UI(CList &rList) : m_list(rList) { }
    ...
}

void main(){
    CList list;
    UI ui(list);
    ui.run();
}
```
위의 소스에서 Composition 관계 예시와 CNode, CList 클래스는 동일하다.<br>
다른 점은 UI 클래스에서 멤버 데이터로 CList 인스턴스가 아닌 CList 인스턴스 멤버 참조 형식을 가진다는 것이다.<br>
이 경우 UI 클래스의 객체가 소멸해도 CList 클래스의 객체는 소멸하지 않는다.<br>
이러한 관계를 Aggregation 관계라 한다.<br>