# 1주차 학습 정리<br>
## Today's Topic: git사용법 + Chapter1, 2<br><br>

### **git 사용법**
1. **git bash 다운로드<br>**
    다운로드 사이트: https://git-scm.com/downloads<br>
    별 다른 설정 없이 next 눌러도 무방<br><br>
  
1. **git bash 설정<br>**
    git bash 실행 후<br>
    ```git config --global user.name 깃허브 이름```<br>
    ```git config --global user.email 깃허브 등록 이메일```<br>
    <img width="100%" src = "https://user-images.githubusercontent.com/83760210/124227122-1d8df100-db45-11eb-9521-2eae31865305.PNG"><br>
    //git bash 설정 완료 화면<br>
    <br>

1. **git hub Repository 생성<br>**
    생성된 repository의 주소 복사하기<br><br>

1. **staging area, local repo 생성<br>**
    원하는 폴더에서 git bash를 열어 ```git clone (url)``` 입력<br>
    이때 url은 복사한 repository의 주소<br>
    <img width="100%" src="https://user-images.githubusercontent.com/83760210/124227911-59758600-db46-11eb-9e87-00d1f5581fe8.PNG">
    //명령어 입력 후 .git 폴더가 생김<br>
    <br>

1. **working directory 업데이트<br>**

1. **add, commit, push<br>**
    working directory의 업데이트가 끝난 후 add, commit, push를 이용해 repository에 업로드한다.<br>
    아래의 명령어를 git bash에 순차적으로 입력한다.<br>
    ```git add .```<br>
    ```git commit -m "커밋메시지"```<br>
    ```git push origin master```<br>
    <img width="100%" src="https://user-images.githubusercontent.com/83760210/124228806-b02f8f80-db47-11eb-9a62-8f730045e85c.PNG"><br>
    //push까지 완료 후 화면<br>
<br><br><br>

### **Chapter 1) C와는 다른 C++**
1. **C와 C++의 차이<br>**
    C++ : C의 비효율성을 개선한 언어<br><br>

1. **HelloWorld로 본 C++<br>**
    ```
    #include <iostream> //#1

    int _tmain(int argc, _TCHAR* argc[]){ //#2
        std::cout << "Hello, World" << endl; //#3
        
        return 0;
    }
    ```
    #1) C++의 표준 입출력 클래스가 정의 된 헤더파일.<br>
    출력 스트림을 나타내는 객체 cout과 입력 스트림을 나타내는 객체 cin이 정의되어 있음.<br>
    기존 C언의 printf() 함수와 scanf() 함수 또한 정의되어 있음.<br><br>
    헤더파일은 표준 헤더파일과 사용자 정의 헤더파일이 있는데, C++에선 표준 헤더파일엔 '.h' 확장자를 생략함.<br>
    따라서 표준 헤더파일 iostream과 사용자 정의 헤더파일 iostream.h는 다른 헤더파일임.<br><br>
    #2) C언어의 main 함수
    ```
    int main(int argc, char* argv[])
    ```
    와는 차이가 있음.<br>
    C언어의 main 함수의 경우 아스키코드를 사용할 것을 전제로 만들어 짐.<br>
    따라서, 유니코드를 사용하기 위해서는 _tmain 함수를 사용해야 함.<br>
    유니코드를 사용하지 않고 아스키코드만 사용한다면 기존 main 함수를 사용해도 무방함.<br><br>
    #3) C++의 출력 구문으로 코드 실행 시 콘솔 창에 Hello, World 가 출력됨.<br>
    ```
    std::cout << "Hello, World" << endl;
    ```
    std는 cout 객체의 namespace(소속)이며, ::는 범위 지정 연산자(Scope Resolution Operator)이다.<br> <<는 연산자 함수로, "Hello, World"라는 변수를 std namespace에 있는 cout 객체에 전달한다는 의미이다.<br>
    이후에 나올 입력 스트림 객체 cin은 cout과 연산자 함수의 방향이 반대이다.<br>
    e.g.
    ```
    cin>>name;
    ```
    endl은 end of line의 약자로, 아스키코드의 줄바꿈 문자 '\n'과 의미가 같으나, C언어의 flush 기능도 같이 수행한다.<br><br>

1. **인스턴스와 입출력 흐름<br>**
    ```
    int a;
    ```
    위의 코드에서 a는 int 자료형에 대한 인스턴스(instance)이다.<br>
    객체지향 프로그래밍에서 인스턴스는 객체의 형식을 갖는 변수를 의미한다.<br><br>
    ```
    std::cout
    ```
    cout은 std namespace에 속한 객체이며, iostream 클래스의 인스턴스(혹은 객체)이다.<br>
    C언어의 출력 스트림 함수 printf()와의 차이점은 다음과 같다.<br>
    * 출력 시 자료형 지정(형식문자) 불필요
    * 문자열 조합에 용이<br>
    e.g.
        ```
        std::cout << "저는" << 20 << "살 입니다." << std::endl;
        ```
        <br>
    ```
    std::cin
    ```
    cin은 cout과 정반대의 입력 방법을 제공하는 입력 스트림 객체이다.<br>
    cout과는 연산자 함수(꺽쇠)의 방향이 반대임을 주의한다.<br>
    ```
    //cout
    std::cout << endl;

    //cin
    std::cin >> age;
    ```
    C언어의 입력 스트림 함수 scanf()와의 차이점은 다음과 같다.
    * 입력 시 자료형 지정(형식문자) 불필요
    * 문자열 입력 시 string 객체를 이용하면 문자열 최대 길이 고려 불필요<br>
    e.g.
        ```
        //string 객체 사용 X
        char szjob[32];
        std::cin szjob;

        //string 객체 사용 O
        #include <string>
        std::string strName;
        getline(cin, strName);
        ```
        <br>

1. **자료형<br>**
    C++은 기본적으로 C의 기본 자료형을 그대로 사용하며, 몇 가지 자료형이 추가되었다.<br>
    C언어의 기본 자료형은 다음과 같다.<br>
    <img width="100%" src="https://user-images.githubusercontent.com/83760210/124347493-0a038880-dc20-11eb-94c7-27eee8dc91cb.PNG">
    1 byte는 8 bit이며, 1 bit는 0 또는 1로 이루어진다.<br>
    또한, 양과 음의 수를 모두 담을 수 있는 signed 변수는 n개의 비트 중 가장 왼쪽 비트를 변수의 부호를 결정하는 데 사용하기 떄문에 signed 변수의 수비범위 반지름은 2^(n - 1)이다.<br>
    즉, int형 변수의 크기는 4 byte이므로 32개의 bit로 이루어지며, 수비범위 반지름은 2^31이다.<br>
    다음은 char형 변수의 bit를 나타낸 것이다.<br>
    <img width="100%" src="https://user-images.githubusercontent.com/83760210/124347799-61eebf00-dc21-11eb-848f-39b1f2c02b66.png">
    위의 그림에서 8번 bit는 부호를 결정하는 bit이며 나머지 7개의 bit로 변수의 값을 나타낸다.<br>
    예를 들어, 2진수 01100001은 10진수로 97이므로 아스키코드 97번 문자, 즉 'a'를 의미한다.<br><br>
    C++에서 추가된, 혹은 사용법이 바뀐 자료형은 다음과 같다.<br>
    <img width="100%" src="https://user-images.githubusercontent.com/83760210/124348031-a9297f80-dc22-11eb-9fdd-9f5a24b44b78.PNG">
    char16_t와 char32_t는 동일하게 유니코드 처리를 위한 자료형이다.<br> 
    이 둘은 그리 중요하지 않으므로 auto와 decltype(expr)만 정리하겠다.<br><br>
    * auto<br>
        auto 자료형을 사용하면 초깃값의 형식에 맞춰 선언하는 인스턴스의 형식이 자동으로 결정된다.<br>
        ```
        #include <iostream>
        using namespace std;

        int main(){
            int a = 10;
            int b(a);
            auto c(b);
            cout << a << ' ' << b << ' ' << c << endl;
            return 0;
        }
        ```
        위 코드의 실행 결과는 다음과 같다.<br>
        ```
        >>>10 10 10
        ```
        위의 코드에서 변수 c의 자료형은 변수 b의 자료형을 따라간다.<br>
        auto 자료형의 경우 이후에 등장할 범위 기반 for문에서 유용하게 사용된다.<br><br>
    * decltype(expr)<br>
        decltype 자료형은 타입 관련 연산을 사용할 때 요긴하게 쓰인다.<br>
        ```
        #include <iostream>
        using namespace std;

        int main(){
            int a = 3;
            decltype(a) b = 2;
            cout << a << ' ' << b << endl;
            return 0;
        }
        ```
        위 코드의 실행 결과는 다음과 같다.<br>
        ```
        >>>3 2
        ```
        위의 코드에서 변수 b의 자료형은 a의 자료형인 int이다.<br>
        decltype(a)는 a의 자료형 int를 나타낸다.<br><br>
1. **메모리 동적 할당<br>**
    C++에서 소스 코드를 실행하면 제일 먼저 소스코드에서 필요한 메모리를 한번에 확보한다.<br>
    예를 들어 다음과 같은 코드가 있다고 하자.<br>
    ```
    #include <iostream>
    
    int main(){
        int a = 10;
        double b;
        return 0;
    }
    ```
    위의 코드에서 생성된 변수는 int형 변수 a와 double형 변수 b 두 개이다.<br>
    두 변수는 각각 4 byte, 8 byte 만큼의 메모리를 필요로 한다.<br>
    따라서 소스코드를 실행하면 4 byte 크기의 메모리와 8 byte 크기의 메모리를 확보한 후 소스코드를 읽기 시작한다.<br>
    이를 정적 할당(static allocation)이라 한다.<br><br>
    총 50명의 학생의 성적을 관리해야 한다고 하자.<br>
    ```
    int scores[50]
    ```
    위와 같이 50명의 점수를 입력할 수 있는 배열을 만들었다.<br>
    그런데 학생의 전입에 의해 학생 수는 변할 수 있다. 메모리 공간이 조금 남는 것은 상관 없지만, 메모리 공간이 부족하다면 곤란해진다.<br>
    메모리 공간이 부족하지 않게 하는 방법은 배열의 크기를 최대한 크게 하는 것이다.<br>
    가령 배열의 크기를 1000으로 지정한다 하자.<br>
    이 경우 메모리 공간이 부족할 일은 거의 없지만, 문제는 너무 많은 공간이 낭비된다는 것이다.<br><br>
    이러한 딜레마를 해결하기 위해 등장한 것이 동적 할당(dynamic allocation)이다.<br>
    ```
    #include <iostream>
    using namespace std;

    int main(){
        int n;
        cin >> n;
        int *arr = new int[n];
        
        ...
        
        delete[] arr;
    }
    ```
    위의 소스 코드에서 ```new``` 와 ```delete``` 연산자가 바로 동적 할당에 사용되는 연산자다.<br>
    `new`와 `delete`는 각각 C언어의 `malloc()` 함수와 `free()` 함수를 대신한다.<br>
    위의 소스 코드는 배열의 크기를 동적으로 할당하는 예제로, 꽤나 유용하게 사용된다.<br>
    한 가지 명심해야 할 것은 `new` 연산자는 객체의 생성자를 호출하고, `delete` 연산자는 객체의 소멸자를 호출한다는 것이다.<br>
    생성자와 소멸자는 클래스의 개념이므로 지금 설명할 수 없다.<br><br>
1. **참조자 형식<br>**
    참조자는 C에는 없는 형식으로 포인터와 구조적으로 유사하다.<br>
    참조자는 반드시 선언과 정의가 동시에 이루어져야 한다.<br>
    ```
    int n_data = 10;
    int &ref = n_data;
    ```
    위의 코드에서 &ref가 바로 int형 변수 n_data의 참조자이다.<br>
    참조자가 포인터와 유사하다고 하는 까닭은, 참조자의 값을 변경하면 원본도 변경되기 때문이다.<br>
    ```
    #include <iostream>
    using namespace std;

    int main(){
        int n_data = 10;
        int &ref = n_data;

        ref = 20;
        cout << n_data << endl;
        return 0;
    }
    ```
    ```
    >>>20
    ```
    또한, 포인터 변수와 동일하게 변수에 저장되는 값이 원본 변수의 주소값이다.<br><br>
    C에서 함수를 호출할 때 매개변수로 주소를 전달하는 기법을 'Call By Reference'라 하는데, C++에서의 Call By Reference는 매개변수로 참조자를 전달한다.<br>
    다음은 Call By Reference의 대표적인 예인 swap 함수를 구현한 것이다.<br>
    ```
    #include <iostream>
    using namespace std;

    void swap(int &a, int &b);

    int main(){
        int x = 10, y = 20;
        swap(x, y);
        cout << "x : " << x << endl;
        cout << "y : " << y << endl;
        return 0;
    }

    void swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }
    ```
    ```
    >>>x : 20
       y : 10
    ```
    swap함수로 전달하는 매개변수가 참조자 형식이므로 함수 내에서 두 변수를 교환하면 원본도 교환된다.<br><br>
    C++에 추가된 문법 중 'r-value 참조' 라는 것이 있다.<br>
    r-value란 대입 연산자의 두 피연산자 중 오른쪽에 위치한 연산자를 말한다.<br>
    ```
    int &&rdata = 3;
    ```
    위의 코드에서 r-value는 3이고, &&rdata를 l-value라고 부른다.<br>
    언뜻 보면 `int r_data = 3;`과 다를 것이 없어보인다.<br>
    실제로 둘은 크게 다르지 않다.<br>
    r-value에서 중요한 것은 그 값이 '임시 결과'임을 이해하는 것이다.<br>
    가령 `3 + 4 + 5` 연산에서 `3 + 4` 연산의 결과를 '임시 결과'라 한다.<br>
    이어지는 `+ 5` 연산에 참여하는 것은 바로 '임시 결과'이다.<br>
    다음 코드를 살펴보자.<br>
    ```
    #include <iostream>
    using namespace std;
    
    int testFunc(int n_param);

    int main(){
        int n_input = 0;
        cout << "Input number: ";
        cin >> n_input;

        int &&rdata = n_input + 5; //#1
        cout << rdata << endl;

        int &&result = testFucn(10); //#2

        result += 10;
        cout << result << endl;

        return 0;
    }

    int testFunc(int n_param){
        int n_result = n_param * 2;
        return n_result;
    }
    ```
    ```
    >>>Input number: 5
       10
       30
    ```
    #1) 덧셈 연산의 결과로 생성된 '임시 결과'에 대한 r-value 참조자 선언과 정의<br>
    #2) 함수 반환값에 대한 r-value 참조자 선언과 정의<br><br>
    보통 임시 결과는 이어지는 연산에 활용된 직후 소멸하는 r-value이다.<br><br>
1. **범위 기반 for문<br>**
    기존 C언어의 for문은 다음과 같이 사용한다.<br>
    ```
    a_list = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    for (int i = 0; i < 10; i++){
        cout << a_list[i] << ' ';
    }
    ```
    ```
    >>>1 2 3 4 5 6 7 8 9 10
    ```
    위의 코드에서 배열 a_list의 크기는 변할 수 있다.<br>
    만약 a_list의 크기가 변할 경우, 위에서 사용한 for문의 조건문 또한 바꾸어 주어야한다.<br>
    그러나 범위 기반 for문을 사용하면 그럴 필요가 없다.<br><br>
    범위 기반 for문은 python의 리스트 for문과 유사하다.<br>
    python에서 for문의 in 뒤에 리스트를 넣으면 리스트 안의 요소들을 출력할 수 있듯이, 범위 기반 for문도 유사한 동작을 수행한다.<br>
    ```
    #include <iostream>
    using namespace std;

    int main(){
        int a_list[5] = {10, 20, 30, 40, 50};

        for (auto n : a_list){
            cout << n << ' ';
        }
        cout << endl;

        return 0;
    }
    ```
    ```
    >>>10 20 30 40 50
    ```
    범위 기반 for문의 가장 큰 장점은 반복 횟수가 배열 요소 개수에 맞춰 자동으로 결정된다는 것이다.<br>
    즉, 배열의 크기가 변할 것을 고려하지 않아도 된다는 것이다.<br><br><br><br>

### **Chapter 2) C++ 함수와 네임스페이스**
1. **디폴트 매개변수<br>**
    C++의 함수는 C와는 다르게 매개변수의 디폴트 값을 선언할 수 있다.<br>
    매개변수의 디폴트 값을 선언한 함수는 호출자 코드에서 실인수를 생략한 채 호출할 수 있다.<br>
    ```
    int testFunc(int = 10);

    void main(){
        std::cout << testFunc() << std::endl;
        std::cout << testFunc(10) << std::endl;
    }

    int testFunc(int n_param){
        return n_param;
    }
    ```
    ```
    >>>10
       10
    ```
    위의 코드에서 `testFunc()`와 `testFunc(10)`의 결과가 같음을 알 수 있다.<br><br>
    매개변수의 디폴트 값을 기술할 때에는 다음 규칙을 지켜야 한다.<br><br>
    1. 피호출자 함수 매개변수의 디폴트 값은 **반드시 오른쪽 매개변수부터 기술**해야 한다.<br>
    1. 매개변수가 여러 개일 때 왼쪽 첫 번째 매개변수의 디폴트 값을 기술하려면 나머지 오른쪽 '모든' 매개변수에 대한 디폴트 값을 기술해야 한다.<br>
    1. 호출자 함수가 피호출자 함수 매개변수의 실인수를 기술하면 이는 왼쪽부터 짝을 맞추어 적용되며, 짝이 맞지 않는 매개변수는 디폴트 값을 적용한다.<br>
    
    <br>
1. **함수 다중 정의<br>**
    C++에서 '다중 정의(Overloading)'는 하나의 함수 이름이나 변수 이름이 여러 의미를 동시에 갖는 것을 말한다.<br>
    C에서는 이름이 같은 함수가 존재할 수 없지만 C++에서는 어떤 식으로든 함수 원형이 달라지면 이름이 같더라도 다른 함수가 된다.<br>
    이를 통해 C++은 함수의 '다형성'을 지원한다.<br>
    ```
    #include <iostream>
    using namespace std;

    int Add(int a, int b, int c){
        cout << "Add(int, int, int): ";

        return a + b + c;
    }

    int Add(int a, int b){
        cout << "Add(int, int): ";
        
        return a + b;
    }

    double Add(double a, double b){
        cout << "Add(double, double): ";

        return a + b;
    }

    void main() {
        cout << Add(3, 4) << endl;
        cout << Add(3, 4, 5) << endl;
        cout << Add(3.3, 4.4) << endl;
    }
    ```
    ```
    >>>Add(int, int): 7
       Add(int, int, int): 12
       Add(double, double): 7.7
    ```
    위의 코드에서 Add()라는 이름의 함수가 세 가지 형태로 다중 정의되었다.<br>
    다중 정의는 Add()라는 함수 이름은 그대로 사용하면서 '더하기'라는 한 가지 개념을 여러 가지 형태로 다양하게 구현할 수 있다.<br><br>
    C의 함수 원형은 `반환 형식`, `호출 규칙`, `함수 이름`, `매개변수` 크게 네 가지가 있다.<br>
    이 중 다중 정의에 영향을 주는 것은 `매개변수` 뿐이다.<br>
    즉, 반환 형식, 호출 규칙, 함수 이름이 같고 매개변수 만이 다른 함수들을 다중 정의 함수라 한다.<br><br>
    다중 정의 함수를 사용할 때에는 주의해야 할 점이 있다.<br>
    ```
    #include <iostream>
    using namespace std;

    void testFunc(int a){ //1번
        cout << "testFunc(int)" << endl;
    }

    void testFunc(int a, int b = 10){ //2번
        cout << "testFunc(int, int)" << endl;
    }

    void main(){
        testFunc(5);
    }
    ```
    위의 코드를 실행하면 컴파일 오류가 발생한다.<br>
    ```
    >>>오버로드된 함수에 대한 호출이 모호합니다.
    ```
    여기서 주목할 것은 호출이 **모호**하다는 점이다.<br>
    1번 함수는 매개변수를 하나만 받는 함수이고, 2번 함수는 매개변수를 두개 받는 함수이다.<br>
    그러나 2번 함수의 경우 두 매개변수 중 하나에 디폴트 값을 선언한 상태이기에 호출자가 함수를 호출 할 때 매개변수를 하나만 넘겨줘도 호출이 가능하다.<br>
    매개변수를 하나만 넘겨줄 경우, 호출자가 1번 함수를 호출하는지, 2번 함수를 호출하는지 컴파일러가 알 수 없다.<br>
    그렇기에 호출이 모호하다는 것이다.<br>
    이러한 점을 유의한다면 다중 정의 함수는 사용자의 편의성과 확장성을 얻을 수 있다.<br><br>
    
    함수를 다중 정의함으로 인해 사용자는 편할 수 있으나, 제작자는 같은 일을 여러 번 반복해야 한다.<br>
    단적인 예가 위의 Add()함수 코드이다.<br>
    또한, 같은 일을 하는 코드가 다중 정의된 함수 여러 개로 존재하게 된다는 것도 문제이다.<br>
    이를 해결하기 위해 C++에서는 함수 템플릿을 사용한다.
    ```
    #include <iostream>
    using namespace std;

    template <typename T>
    T Add(T a, T b)
    {
        return a + b;
    }

    void main(){
        cout << Add(3, 4) << endl;
        cout << Add(3.3, 4.4) << endl;
    }
    ```
    함수 템플릿을 사용하면 위의 Add() 함수 다중 정의 코드와 동일한 동작을 간결하고 확장성 높게 만들 수 있다.<br>
    Add(3, 4)를 호출하면 typename `T`를 3과 4의 자료형 `<int>`로 해석한다.<br>
    함수 템플릿을 사용하면 코드를 만들어 놓고 전혀 사용하지 않는 상황은 발생할 수 없으며, 무엇보다 같은 일을 하는 코드가 여러 번 등장할 필요가 없어졌기 때문에 안정적인 구조라 할 수 있다.<br><br>
1. **인라인 함수<br>**
    함수는 호출 시 스택 메모리 사용이 증가하고 매개변수로 인해 메모리 복사가 일어난다.<br>
    또한, 제어 흐름도 이동해야 한다.<br>
    이러한 문제를 해결하기 위해 사용하는 것이 매크로이다.<br>
    그러나 매크로는 함수가 아니므로 다양한 논리적 오류를 발생시키기도 한다.<br>
    매개변수에 형식을 지정할 수 없다는 점도 큰 문제이다.<br><br>
    그래서 등장한 것이 인라인 함수이다.<br>
    인라인 함수는 매크로의 장점과 함수의 장점을 두루 갖춘 함수이다.<br>
    본질적으로 함수이므로 매개변수에 형식을 지정할 수 있어 매크로의 단점을 보완해주며, 내부적으로는 매크로처럼 함수 호출을 하지 않는다.<br>
    ```
    #include <iostream>
    #include <cstdio>

    #define ADD(a, b)((a) + (b))

    int Add(int a, int b){
        return a + b;
    }

    inline AddNew(int a, int b){
        return a + b;
    }

    void main(){
        int a, b;
        scanf_s("%d%d", &a, &b);

        printf("ADD(): %d\n", ADD(a, b));
        printf("Add(): %d\n", Add(a, b));
        printf("AddNew(): %d\n", AddNew(a, b));
    }
    ```
    ```
    >>>3 4
       ADD(): 7
       Add(): 7
       AddNew(): 7
    ```
    위의 소스코드에서 매크로든 일반 함수든 인라인 함수든 결과는 모두 동일 하다.<br>
    가능하다면 모든 함수를 인라인 함수로 처리하면 좋겠지만, 코드가 일정 수준 이상 길어지면 인라인 함수가 되는 것은 바람직하지 않다.<br>
    바람직한 코드의 길이는 개발자가 정하는 것이 아닌 컴파일러가 정하는 것으로, 일정 길이 이하의 함수는 모두 컴파일러가 알아서 인라인 함수로 받아들인다.<br><br>
1. **네임스페이스<br>**
    `namespace`는 C++가 지원하는 각종 요소들을 한 범주로 묶어주기 위한 문법이다.<br>
    네임스페이스를 선언하는 방법은 다음과 같다.<br>
    ```
    namespace TEST
    {
        int g_n_data = 100;

        void testFunc(){
            std::cout << "TEST::testFunc()" << endl;
        }
    }
    ```
    네임스페이스 블록 내부에 선언하는 변수나 함수들은 모두 명시한 '이름'에 속한다.<br>
    위의 코드에서 int 형 변수 g_n_data와 함수 testFunc()는 모두 TEST라는 네임스페이스에 속한다.<br><br>
    프로그램 내부에서 앞으로 자주 사용해야 하는 네임스페이스가 있다면 모든 식별자 앞에 이를 기술하는 것은 귀찮다.<br>
    이를 해결해주는 것이 바로 `using` 예약어이다.<br>
    ```
    using namespace std;

    void main(){
        cout << "using std" << endl;
    }
    ```
    ```
    >>>using std
    ```
    위의 소스코드에서 std::cout이 아닌 cout을 써도 성립하는 이유는 `using namespace std` 때문이다.<br><br>
    네임스페이스는 중첩이 가능하다.<br>
    하나의 네임스페이스 안에 여러 개의 네임스페이스가 속할 수 있다.<br>
    ```
    #include <iostream>
    using namespace std;

    namespace TEST
    {
        int g_n_data = 100;
        namespace DEV
        {
            int g_n_data = 200;
            namespace WIN
            {
                int g_n_data = 300;
            }
        }
    }

    void main(){
        cout << TEST::g_n_data << endl;
        cout << TEST::DEV::g_n_data << endl;
        cout << TEST::DEV::WIN::g_n_data << endl;
    }
    ```
    ```
    >>>100
       200
       300
    ```
    <br>C++에서의 식별자는 C와 달리 '네임스페이스::이름'의 형태를 취한다.<br>
    즉, 이름이 같다는 것은 속해 있는 네임스페이스도 같다는 의미이다.<br>
    네임스페이스는 달라도 나머지가 같은 형태로 선언되었다면 다중 정의가 가능하다.<br>
    ```
    #include <iostream>
    using namespace std;

    void testFunc(){
        cout << "::testFunc()" << endl;
    }

    namespace TEST
    {
        void testFunc(){
            cout << "TEST::testFunc()" << endl;
        }
    }

    namespace MYDATA
    {
        void testFunc(){
            cout << "DATA::testFunc()"" << endl;
        }
    }

    void main(){
        testFunc();
        ::testFunc();
        TEST::testFunc();
        MYDATA::testFunc();
    }
    ```
    ```
    >>>::testFunc()
       ::testFunc()
       TEST::testFunc()
       DATA::testFunc()
    ```
    위의 소스코드에서 네임스페이스는 전역, TEST, MYDATA 이렇게 세 가지이다.<br>
    세 가지 네임스페이스 모두에 void testFunc() 함수가 존재하므로 호출자는 네임스페이스를 기술함으로써 각각을 구별해 호출해야 한다.<br><br>
1. **식별자 검색 순서<br>**
    C++에서 식별자가 선언된 위치를 검색하는 순서는 다음과 같다.<br><br>
    **전역 함수인 경우<br>**
    1. 현재 블록 범위
    1. 현재 블록 범위를 포함하는 상위 블록 범위
    1. 가장 최근에 선언된 전역 변수나 함수
    1. using 선언된 네임스페이스 혹은 전역 네임스페이스(두 곳에 동일한 식별자가 존재할 경우 컴파일 오류 발생)

    <br>**클래스 매서드인 경우<br>**
    1. 현재 블록 범위
    1. 현재 블록 범위를 포함하는 상위 블록 범위
    1. 클래스의 멤버
    1. 부모 클래스의 멤버
    1. 가장 최근에 선언된 전역 변수나 함수
    1. 호출자 코드가 속한 네임스페이스의 상위 네임스페이스
    1. using 선언된 네임스페이스 혹은 전역 네임스페이스(두 곳에 동일한 식별자가 존재할 경우 컴파일 오류 발생)