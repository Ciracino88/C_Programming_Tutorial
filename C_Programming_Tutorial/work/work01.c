//
//  main.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/1/24.
//

// 세미콜론으로 끝내야 한다.

// include : python 에서 import 와 유사한 개념이라고 생각
// stdio : standard input output
#include <stdio.h> // 입출력 라이브러리를 사용하기 위한 준비

int main2(void) {
    // 정수, 실수, double
    int age = 12;
    printf("%d\n", age);
    age = 13;
    printf("%d\n", age);
    
    float f = 0.1234f;
    printf("%.2f\n", f); // 소숫점 2자리까지만 출력
    
    double d = 0.12345;
    printf("%lf\n", d);
    return 0;
}

// 프로젝트를 생성하게 되면 솔루션이 같이 생성되게 된다.
// 솔루션 -> 프로젝트 -> (소스 파일, 헤더 파일)
// 프로젝트 : 하나의 실행파일 (window : .exe, MaxOS : .xcodeproject

// 소스 코드를 빌드 (컴파일 에러, 링크 에러 발생 시 실행하지 않고 되돌아감)
// 실행하는 방법은 디버깅 과정을 거칠 수도 있고 안 할 수도 있다. 실행 오류가 없다면 일반적으로 "디버깅하지 않고 실행"을 거친다.

// xcode 에는 솔루션이라는 개념이 없다. 유사한 개념으로 workspace 라는 것이 있는데, 이 안에 여러 개의 프로젝트를 둘 수가 있다.

// C는 함수들의 집합이다
// C에서 함수는 main 함수와 main 이외의 함수가 있다.
// c 프로젝트에서 main 함수는 반드시 하나만 존재해야 한다.
// main 함수 안에서 다른 함수들이 순차적으로 동작하는 방식.
