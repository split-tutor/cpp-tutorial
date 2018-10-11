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

## 2. Git bash 설치 및 기본 커맨드
대부분의 소프트웨어 프로젝트는 [Git](https://git-scm.com/downloads) 버전 관리 툴을 통해 관리됩니다.
그리고 많은 개발자들은 Linux 또는 MacOS 환경에서 사용하는 [bash](https://en.wikipedia.org/wiki/Bash_(Unix_shell))
커맨드라인을 익숙하게 사용합니다.
Git bash를 실행한 후, 다음 내용을 커맨드라인에 입력해주세요.
```
git pull https://github.com/split-tutor/cpp-tutorial
```

그러면 현재 경로에 새로운 폴더가 생깁니다.
현재 경로에 어떤 파일 및 경로가 있는 지는 `ls` 커맨드를 통해 확인할 수 있습니다.
list의 약자라고 생각하시면 기억하기 쉽습니다.
```
> ls
...
cpp-tutorial
...
```

이제 해당 경로로 이동해보도록 하겠습니다. `cd` 커맨드를 사용하면 됩니다.
change directory의 약자라고 생각하시면 기억하기 쉽습니다.
```
> cd cpp-tutorial
> ls
day1.md    src/    README.md
```

새로운 파일 또는 경로를 만들 수도 있습니다. `mkdir`, `touch`
커맨드는 각각 새로운 경로와 파일을 만듭니다.
```
> mkdir hello
> ls
day1.md    src/    README.md    hello/
> touch hello.txt
> ls
day1.md    src/    README.md    hello/    hello.txt
```

파일 또는 폴더 전체를 복사할 수도 있습니다. `cp` 또는 `cp -r` 커맨드를 사용합니다.
복사하려는 파일 또는 폴더의 이름을 앞에, 새롭게 만들려는 파일 또는 폴더의 이름을 뒤에 씁니다.
```
> cp hello.txt goodbye.txt
> ls
day1.md    src/    README.md    hello/    hello.txt    goodbye.txt
> cp -r hello goodbye
> ls
day1.md    src/    README.md    hello/    hello.txt    goodbye.txt    goodbye/
```

파일 또는 경로의 이름을 바꿔주고 싶을 때에는 `mv` 커맨드를 사용합니다.
`cp`와 비슷하게 사용하면 됩니다. 다만 폴더를 옮길 때에도 `-r`을 붙일 필요는 없습니다.

`rm`또는 `rm -rf`는 파일 또는 경로를 지울 때 사용합니다.
되돌릴 수 없으니까 조심해서 사용해야 합니다.

모든 경로는 `.`과 `..`라는 하위 경로가 존재합니다.
두 경로는 특수한 케이스로, `.`는 현재 경로를 가리키고,
`..`는 상위경로를 가리킵니다.
현재 위치가 어디인지에 상관 없이, `cd ..`를 하면 바로 윗 단계 경로로 돌아갈 수 있습니다.

> cd ../../../../

여러번 반복해서 사용하면 상위 폴더로 계속해서 이동이 가능합니다.
길을 잃어버렸을 때를 대비해서 `pwd` 커맨드를 기억합니다.
`pwd` 커맨드는 현재 경로를 알려줍니다.

## 3. QtCreator 및 CMake 설치

* [QtCreator](https://www.qt.io/)
* [CMake](https://cmake.org/)

주의사항
1. Qt를 설치할 때MinGW를 함께 설치하도록 한다. (기본 설치 경로는 C:/Qt/Tools/mingwxx/bin/g++.exe)
2. CMake를 설치할 때 PATH에 추가하도록 한다.
3. QtCreator Kit에서, CMake generator로 "MinGW Makefiles"를 사용하도록 설정한다. (`cmake .. -G "MinGW Makefiles"`)
4. CMake configuration이 성공하는 것을 확인한다.

위 사이트에서 QtCreator 및 CMake를 다운받습니다.

## 3. Hello, World!

QtCreator를 통해 기존 프로젝트를 열 수 있습니다.
`src/CMakeLists.txt`를 열면 프로젝트를 준비합니다.
`src/day1/main.cpp`을 열어봅시다.

```cpp
#include <iostream>
#include <string>

int main()
{
    int year = 0;

    std::string name = "Your name";

    std::cout << "Hello, my name is " << name
              << " and I started programming in " << year << "!\n";

    return 0;
}
```

이 프로그램을 빌드하기 위해서는 다음과 같은 작업이 필요합니다.
```
> cd src
> mkdir build
> cd build
> cmake .. -G "MinGW Makefiles"
> mingw32-make(.exe)
```

실행은 다음과 같이 해볼 수 있습니다.
```
> pwd
.../src/build
> cd day1
> ls
day1.exe
> ./day1(.exe)
Hello, my name is your name and I started programming in 0!
```

**과제**
위 프로그램에서 필요한 부분을 고쳐서 본인의 이름을 포함한 올바른 문장을 출력하도록 합니다.
