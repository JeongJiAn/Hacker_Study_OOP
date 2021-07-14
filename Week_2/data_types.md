# **자료형<br>**
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
    decltype(a)는 a의 자료형 int를 나타낸다.<br>

<br>배열은 말 그대로 변수의 나열이다.<br>
100개의 데이터를 받아야 한다면 변수를 100개 만드는 것 보다 크기가 100인 배열을 하나 만드는 것이 관리하기가 편할 것이다.<br>
물론 크기가 100인 배열을 만드나 변수를 100개 만드나 차지하는 메모리의 크기는 같다.<br>
배열을 사용하면 같은 종류의 대량의 데이터를 효율적이고 간편하게 처리할 수 있게 된다.<br><br>
배열을 선언하는 방법은 다음과 같다.
```
int arr[5]; // 크기가 5인 int형 1차원 배열 선언
int arr[5] = { 0, 0, 0, 0, 0 }; // 크기가 5인 int형 1차원 배열 선언 후 모든 요소를 0으로 초기화
int arr[5] = { 0 }; // 윗 줄과 동일
int arr[] = { 1, 2, 3, 4, 5 } // 크기가 5이고 요소가 1, 2, 3, 4, 5 인 배열 선언 및 정의
double arr[5]; // 크기가 5인 double형 1차원 배열 선언
float arr[5]; // 크기가 5인 float형 1차원 배열 선언
char str[5]; // 크기가 5인 1차원 문자열 선언
char str[5] = { 'a', 'b', 'c', 'd', '\0' }; // 크기가 5인 1차원 문자열 선언 및 정의
char str[5] = "abcd"; // 윗 줄과 동일
int arr[4][5]; // 크기가 4 * 5인 int형 2차원 배열 선언
int arr[4][5] = { {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5} }; // 크기가 4 * 5인 int형 2차원 배열 선언 및 정의
```
위의 소스코드에서 다양한 배열들을 선언하고 정의하는 방법을 살펴보았다.<br>
위에서 유심히 볼 것은 다음과 같다.<br>
1. 배열 초기화<br>
    배열을 초기화 할 때, 중괄호 안의 데이터가 배열의 0번 째 인덱스 부터 대입된다.<br>
    ```
    int arr[5] = { 1, 2, 3, 4, 5 };
    ```
    의 경우<br>
    <img width="100%" src="https://user-images.githubusercontent.com/83760210/125659429-5a5f000f-7d87-43d0-8302-66da2701db11.png">
    와 같이 초기화된다.<br><br>
    ```
    int arr[5] = { 1, 2 };
    ```
    의 경우<br>
    <img width="100%" src="https://user-images.githubusercontent.com/83760210/125659946-78f7a289-896e-417b-a027-eb4730cf0ef5.png">
    와 같이 초기화된다.<br>
    정리하면, 배열을 초기화 할 때 중괄호 안의 데이터는 0번째 인덱스 부터 대입되며, 배열의 크기보다 중괄호 안의 데이터가 적은 경우 나머지 인덱스는 0으로 초기화된다.<br><br>
1. 문자열<br>
    C++에서 문자열은 문자형 변수의 배열이다.<br>
    문자와 문자열을 구분하는 지표는 `''`와 `""`이다.<br>
    단일 문자의 경우 `'a'`와 같이 나타내며, 문자열의 경우 `"hello"`로 나타낸다.<br>
    즉, C++에서 `'a'`와 `"a"`는 엄연히 다르다.<br><br>
    ```
    char str[6] = "Hello";
    ```
    위의 코드에서 주목할 점은 두 가지이다.<br>
    첫 번째는 문자열을 초기화 할 때는 중괄호가 아닌 쌍따옴표를 사용해도 된다는 점이다.<br>
    위와 같은 방법으로 초기화를 해도 중괄호를 사용하여 초기화하는 것과 같은 동작을 수행한다.<br><br>
    두 번째는 문자열의 크기이다.<br>
    Hello는 5개의 문자로 구성되어있다.<br>
    그러나 문자열 str의 크기는 6이다.<br>
    언뜻 보면 배열의 크기보다 초기화하는 문자열의 길이가 짧아 5번 째 인덱스에 0이 들어갈 것이라 생각되지만, 실제로는 0이 들어가지 않는다.<br>
    문자열의 경우, 문자열의 끝을 나타내는 문자 `'\0'`, NULL문자가 존재한다<br>
    문자열의 크기를 지정할 때, NULL문자가 반드시 포함된다는 것을 염두에 두어야 한다.<br><br>
1. 2차원 배열<br>
    2차원 배열은 1차원 배열의 배열이다.<br>
    Python의 Lists in List와 유사하다.<br>
    ```
    int arr[4][5];
    ```
    위의 2차원 배열의 인덱스 테이블은 다음과 같다.<br>
    <img width="100%" src="https://user-images.githubusercontent.com/83760210/125661054-da6fdfe5-01b0-4d86-946f-fcf8f8659edf.png">
    2차원 배열의 왼쪽 인덱스는 세로를, 오른쪽 인덱스는 가로를 나타낸다.<br>
    즉, `arr[4][5]`는 크기가 5인 int형 1차원 배열이 4개 모여있는 배열이다.<br>
    