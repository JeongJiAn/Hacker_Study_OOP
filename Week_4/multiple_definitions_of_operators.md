# **연산자 다중 정의<br>**
## Today's Topic: Chapter 5(5.2~5.6)<br><br>

### **산술 연산자<br>**
int 자료형 변수 x에 대해 x + 3과 같은 연산을 실행하는 것은 자연스럽다.<br>
이를 클래스의 인스턴스에도 적용하고자 하여 data + 3과 같은 연산을 실행하면 오류로 인식된다.<br>
이처럼 int형 혹은 float형 간의 덧셈 연산 이외에 다양한 자료형에 대한 덧셈 연산을 사용하는 방법은 연산자 다중 정의를 이용하는 것이다.<br><br>
연산자 다중 정의란 함수 다중 정의와 유사하게 하나의 연산자에 대해 여러 가지 사용법을 정의하는 것이다.<br>
가령, 본래 int형 혹은 float형 끼리의 덧셈 연산을 의미하던 '+' 연산자를 클래스의 인스턴스와 int형 변수의 덧셈 기능을 추가로 정의할 수 있다.<br>
```
#include <iostream>
using namespace std;

class CMyData
{
public:
    //변환 생성자
    CMyData(int n) : data(n){
        cout << "CMyData(int)" << endl;
    }

    //복사 생성자
    CMyData(const CMyData &rhs) : data(rhs.data){
        cout << "CMyData(const CMyData &)" << endl;
    }

    //이동 생성자
    CMyData(const CMyData &&rhs) : data(rhs.data){
        cout << "CMyData(const CMyData &&)" << endl;
    }

    //형변환
    operator int() { return data; }

    //+
    CMyData operator+(const CMyData &rhs)
    {
        cout << "operator+" << endl;
        CMyData result(0);
        result.data = this->data + rhs.data;

        return result;
    }

    //=
    CMyData& operator=(const CMyData &rhs)
    {
        cout << "operator=" << endl;
        data = rhs.data;
        
        return *this;
    }

private:
    int data = 0;
}

void main(){
    cout << "*****Begin*****" << endl;
    CMyData a(0), b(3), c(4);

    a = b + c;
    cout << a << endl;
    cout << "******End******" << endl;
}
```
```
>>>*****Begin*****
   CMyData(int)               --> a
   CMyData(int)               --> b
   CMyData(int)               --> c
   operator+                  --> b + c
   CMyData(int)               --> class>int 형변환
   CMyData(const CMyData &&)  --> 이동 생성자
   operator=                  --> a = 임시 객체
   7                          --> a 결과
   ******End******
```
위의 소스코드의 결과를 화살표로 해석해놓았다.<br>
객체 a, b, c가 만들어지고 b + c로 인해 operator+()가 호출되었다.<br>
b + c는 b.operator+(c) 로 바꿔 쓸 수 있다.<br>
호출 후 반환되는 것은 class의 객체인데, 이 클래스는 int형 형변환을 지원하므로 형변환이 실행된다.<br>
이후 리턴값이 임시 객체에 저장되기에 임시 객체가 호출되었고, a에 임시 객체를 대입하는 대입 연산자가 실행된다.<br>
a = b + c는 a.operator=(b.operator+(c))로 바꿔 쓸 수 있다.<br>
결과적으로 객체 a의 data에는 객체 b와 c의 data 값의 합인 7이 저장된다.<br><br>

'+' 연산자 뿐만 아니라 '-', '*', '/' 등등 다양한 연산자에 대해서도 다중 정의가 가능하다.<br>
또한 서로 다른 자료형 끼리의 연산도 가능한데, 객체와 int형 변수 간의 덧셈을 정의하고자 한다면<br>
`CMyData operator+(int n)`<br>
위와 같이 매개변수로 int 자료형 변수를 받으면 된다.<br>
int형 이외의 다른 자료형 과의 연산에 대해서도 동일하다.<br><br>

### **대입 연산자<br>**
단순 대입 연산자를 다중 정의하는 이유에 대해서는 앞의 깊은 복사와 얕은 복사에서 설명했다.<br>
이번에는 대입 연산자 다중 정의를 기술적인 측면에서 따져보겠다.<br>
```
~
void operator=(const CMyData &rhs)
{
    //본래 가리키던 메모리 삭제
    delete data;
    //새로 할당한 메모리에 값 저장
    data = new int(rhs.data);
}
~
```
위의 대입 연산자 함수는 언뜻 보기엔 문제가 없다.<br>
실제로 다음을 실행해보면 값이 잘 나온다.<br>
```
void main(){
    CMyData a(0), b(5);
    a = b;
    cout << a << endl;
}
```
```
>>>5
```
그런데 위의 대입 연산자 함수는 두 가지 문제가 있다.<br>
첫 번째는 자기 자신을 대입할 때 로직 에러가 발생한다는 점이고,<br>
두 번째는 다항 연산을 할 경우 컴파일 에러가 발생한다는 점이다.<br><br>
```
a = a;
```
첫 번째 경우, 대입 연산자 함수가 호출되고, 먼저 본래 a에 저장되어있던 data 메모리를 삭제해버린다.<br>
데이터를 복사하기도 전에 원본을 삭제해버렸기 때문에 연산 결과 a에 저장되는 값은 쓰레기값이다.<br><br>
```
a = b = c;
```
두 번째 경우, 첫 번째 경우보다 심각하다.<br>
이 경우는 함수의 리턴값이 void 이므로 발생하는데, 위의 코드에서 `b = c`가 먼저 호출된다.<br>
이후 함수의 리턴값이 void이므로 `a = void`라는 연산이 발생하는데, 이러한 연산은 불가능하다.<br><br>
따라서, 대입 연산자를 다중 정의할 때에는 다음과 같이 정의해야한다.<br>
```
CMyData& operator=(const CMyData &rhs)
{
    if(this == &rhs){
        return *this;
    }

    delete data;
    data = new int(rhs.data);

    return *this;
}
```
자기 자신을 대입할 때 발생하는 오류를 막기 위해 조건문을 사용하여 두 피연산자들이 같으면 바로 리턴되는 구문을 추가하고,<br>
다항 연산의 경우를 고려하여 *this를 리턴한다.<br><br>

복합 대입 연산자 또한 단순 대입 연산자와 크게 다를 것은 없다.<br>
```
CMyData& operator+=(const CMyData &rhs){
    //현재 값 처리
    int *new_data = new int(*data);
    //누적할 값 처리
    *new_data += *rhs.data;

    delete data;
    data = new_data;

    return *this;
}
```
복합 대입 연산자에서 단순 대입 연산자에 있는 조건문이 생략된 이유는,<br>
복합 대입 연산자의 경우 기존의 값을 새로운 변수에 저장해놓기 때문에 원본을 삭제해도 원본의 값은 새로운 변수에 저장되어있기 때문이다.<br><br>

이동 대입 연산자는 이동 생성자와 유사하게 임시 객체로 인해 생겨난 연산자다.<br>
임시 객체를 r-value로 삼아 곧바로 단순 대입 연산을 실행하면 이동 대입 연산자가 호출된다.<br>
일반 대입 연산자는 깊은 복사를 하는 반면, 이동 대입 연산자는 얕은 복사를 수행한다.<br>
```
CMyData& operator=(CMyData &&rhs)
{
    //얕은 복사를 수행하고 원본은 nullptr로 초기화한다.
    data = rhs.data;
    rhs.data = nullptr;

    return *this
}
```
임시 객체는 곧 사라질 것이므로 임시 객체에 저장된 값을 l-value에 저장하고 임시 객체는 삭제한다.<br><br>

### **배열 연산자<br>**
배열 연산자를 사용하는 이유는 사용자로 하여금 포인터 및 메모리 동적 할당을 수행하면서도 배열을 다루는 것 처럼 편리하게 사용할 수 있도록 하기 위해서이다.<br>
```
//상수형 참조인 경우의 배열 연산자
int operator[](int index) const
{
    return data[index];
}

//일반적인 배열 연산자
int& operator[](int index)
{
    return data[index];
}
```
아래의 배열 연산자는 우리가 보통 사용하는 배열과 동일하게 l-value와 r-value로 사용할 수 있다.<br>
그러나, 상수형 참조인 경우의 배열 연산자는 r-value로만 사용할 수 있다.<br>
배열 연산자 함수의 매개변수는 int 자료형 변수 하나뿐으로, 배열의 인덱스로 활용된다.<br><br>

### **관계 연산자<br>**
상등 및 부등 연산자와 비교 연산자를 합쳐 관계 연산자라 한다.<br>
이와 같은 연산자들의 연산 결과로 생성되는 값은 int 자료형으로, 참이면 1, 거짓이면 0이 생성된다.<br>
즉, 관계 연산자 함수의 리턴값은 int형이다.<br>
```
int operator==(const CMyData &rhs){
    return this->data == rhs.data;
}

int operator!=(const CMyData &rhs){
    return this->data != rhs.data;
}
```
관계 연산자 다중 정의를 이용해 배열 단위 비교 기능을 구현하는 것도 가능하다.<br>
특히 문자열에서 두 문자열의 비교를 할 때 자주 쓰인다.<br><br>

### **단항 증감 연산자<br>**
단항 증감 연산자 '++'은 주로 반복문에서 사용된다.<br>
단항 증감 연산자의 경우 전위식과 후위식이 있는데, 두 가지를 구분하는 것이 중요하다.<br>
```
int a = 10;
cout << a << endl;
cout << a++ << endl;
cout << ++a << endl;
```
```
>>>10
   10
   12
```
위의 소스코드를 실행한 결과, 각 줄에서 a의 값은 각각 10, 11, 12이다.<br>
그러나, 출력된 값은 10, 10, 12이다.<br>
C++은 왼쪽에서 오른쪽으로 컴파일하는데, 후위식(a++)의 경우 a가 먼저 출력된 뒤 a에 1이 더해지고,<br>
전위식(++a)의 경우 a에 1이 먼저 더해진 후 a가 출력된다.<br>
따라서 각 줄마다 a의 값은 1씩 증가하지만, 출력값은 그렇지 않다.<br><br>

단항 증감 연산자를 다중 정의하는 방법은 다음과 같다.<br>
```
//전위 증가 연산자
int operator++()
{
    return ++data;
}

//후위 증가 연산자
int operator++(int)
{
    int n_data = data;
    data++;

    return n_data;
}
```
전위 증가 연산자의 경우 특별할 것이 없다.<br>
1을 더한 값을 리턴했을 뿐이다.<br>
그러나 후위 증가 연산자의 경우 조금 특이하다.<br>
멤버 변수 data의 값을 증가시키기 전에 먼저 n_data에 백업을 하고, 그 다음 증가 연산을 실행한다.<br>
최종적으로 증가된 값이 아닌 백업해둔 값을 리턴한다.<br>