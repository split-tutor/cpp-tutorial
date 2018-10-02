SPLIT 코딩 학습과정 DAY 1
===

#### Last edit: 2/10/2018
#### Contact: Seonghyun Park <<split.tutor@gmail.com>>

## 0. 준비사항
[GitHub](https://github.com/join?source=header-home) 계정을 준비해주세요.
질문 사항은 위의 메일 또는[issue](https://github.com/split-tutor/cpp-tutorial/issues)에 올려주세요.
이슈를 작성할 때에는 [Markdown 작성 가이드](https://guides.github.com/features/mastering-markdown/)를
참고하면 좋습니다.

## 1. 학습목표
C++ 프로그램 작성 및 실행에 필요한 개발 환경을 구성한다.
첫 프로그램인 Hello, World 프로그램을 작성할 수 있다.
기본적인 C++ 프로그램이 어떻게 작성되는 지를 학습한다.

## 2. QtCreator 및 CMake 설치

* [QtCreator](https://www.qt.io/)
* [CMake](https://cmake.org/)

주의사항
1. Qt를 설치할 때MinGW를 함께 설치하도록 한다. (기본 설치 경로는 C:/Qt/Tools/mingwxx/bin/g++.exe)
2. CMake를 설치할 때 PATH에 추가하도록 한다.
3. QtCreator Kit에서, CMake generator로 "MinGW Makefiles"를 사용하도록 설정한다. (`cmake .. -G "MinGW Makefiles"`)
4. CMake configuration이 성공하는 것을 확인한다.

위 사이트에서 QtCreator 및 CMake를 다운받는다.

## 3. Hello, World!

이제 New Project를 만들고 다음과 같이 `main.cpp` 프로그램을 작성한다.
```cpp
#include <iostream>
#include <string>

int main()
{
    int year = 0;

    std::string name = "Your name";

    std::cout << "Hello, my name is " << name
              << " and I started programming in " << year << "\n";

    return 0;
}
```

실행 결과는 하단 Application Output에서 확인할 수 있다.
혹은 Windows cmd에서 직접 실행파일을 실행하는 방법도 있다.

**과제**
위 프로그램에서 필요한 부분을 고쳐서 본인의 이름을 포함한 올바른 문장을 출력하도록 합니다.
