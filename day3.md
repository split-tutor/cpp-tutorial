SPLIT 코딩 학습과정 DAY 3
===

#### Last edit 12/10/2018
#### Contact: Seonghyun Park <<split.tutor@gmail.com>>

## 1. 학습목표
Array, struct, union 등 다양한 타입에 대해 배우고 적절하게 사용할 수 있다.

함수를 선언하는 방법과 호출하는 방법에 대해서 배운다.

Call-by-value와 Call-by-reference의 차이점에 대해 배운다.

Recursive하게 호출되는 함수의 동작 방식을 이해한다.

## 2. More types!
지난 시간에 배운 기초적인 타입으로는 여러 자료를 효과적으로 나타내기 어렵습니다.
예컨대, (1) 같은 타입의 자료를 여러개 모아서 하나의 변수에 저장해주고 싶거나,
(2) 서로 다른 종류의 타입 여러개를 하나로 묶어서 나타내고 싶을 때,
우리가 지난 시간에 배운 타입만으로는 부족하다는 것을 느끼게 됩니다.
만약 지난 시간에 배운 타입만으로 여러 정수의 묶음을 표현하고 싶다면 아래와 비슷한 방법이 최선입니다.

```cpp
int x1, x2, x3, ... ;

std::cin >> x1 >> x2 >> x3 >> ... ;

std::cout << x1 << x2 << x3 << ... ;
```

지난 시간에 배운 반복문을 활용하는 것도 어렵습니다.
한 10개 정도만 있다면 그마나 프로그램을 작성하는 것은 가능하겠지만,
변수가 1,000개 또는 10,000개가 된다면 프로그램을 작성하는 것이 정말 어려워질 것입니다.
다행히도 C++ 에는 이런 경우에 사용하기 좋은 타입이 존재합니다.
이번 시간에는 주로  배열 (Array)과 구초체 (Struct)에 대해 배워보도록 합니다.

* **Array**

Array를 통해 같은 타입의 변수를 한 데 묶어서 저장하고 접근하는 것이 가능합니다.
(참고. `std::vector`, `std::set`, `std::map` 같은 더 복잡한
[자료구조](https://en.wikipedia.org/wiki/Data_structure)를 사용할 수도 있습니다.
물론 직접 만들어서 사용할 수도 있습니다.)
Array는 다음과 같이 선언합니다.

> <타입> <변수명>\[(크기)\] (= {초기 값});

초기값이 주어지는 경우에는 크기를 적어주지 않아도 되지만,
초기값이 주어지지 않는 경우에는 크기를 정해주도록 합니다.
(프로그램을 작성하는 순간에 크기가 정해져야 한다는 게 제약 조건으로 느껴질 수 있습니다.
프로그램이 실행되는 동안 크기가 정해지도록 메모리를 할당하는 방법과 (동적할당),
`std::vector`를 통해서 프로그램이 실행되는 도중에도 크기가 변하는 자료구조에 대해서는 다음에 배워보도록 합니다.)
코드로 보면 다음과 같습니다.

```cpp
int x[3] = { 0, 1, 2 };
char c[] = "Hello, World!\n"; // Though not recommended in C++. Use std::string instead.
double d[4] = { 0.0, 1.0, 2.0 };
std::string greetings[] = { "Hello", "How are you", "Good morning" };
```

이렇게 Array를 선언한 다음에는, `[]` 연산자를 통해 배열의 각 원소에 접근할 수 있습니다.
각 원소에 대해 덮어쓰기 또는 읽어오기가 모두 가능합니다.

```cpp
x[1] = 3;     // updating the value in the array
y = x[2] + z; // loading the value in the array
```

예를 들어 다음 코드는 10개의 정수를 사용자로부터 입력 받아서 홀수에 해당하는 자리에는 'x',
짝수에 해당하는 자리에는 'o'를 출력하는 역할을 합니다.

```cpp
int n[10];
char c[10];

for (int i = 0; i < 10; i++) {
    std::cin >> n[i];
}

for (int i = 0; i < 10; i++) {
    if (n[i] % 2 != 0)
        c[i] = 'x'; // odd numbers
    else 
        c[i] = 'o'
}

for (int i = 0; i < 10; i++) {
    std::cout << c[i];
}
```

위 코드는 별로 좋은 코드는 아닙니다. 어떻게 더 좋게 만들 수 있을까요?
(Hint: 가독성을 해치지 않는 한도 내에서, 반복문 또는 조건문의 사용을 최소화해봅시다.
그리고 `char[]`보다는 `std::string`을 사용하도록 합니다.)

* **Structure**

TODO

* **(Optional) Union**

TODO

## 3. 함수

* **함수의 선언**

TODO

* **함수의 호출**

TODO

* **Call-by-value와 call-by-reference**

TODO

## 4. Recursion

TODO

## 5. 과제