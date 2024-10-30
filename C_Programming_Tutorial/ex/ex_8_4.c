//
//  ex_8_4.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/29/24.
// main_ex48

#include <stdio.h>

// 함수의 선언 : 프로그램은 main 부터 시작한다. main 내에서 실행되는 함수가 아래에 정의되어 있음을 알려주는 행위를 함수의 선언이라 한다.
void Hello();
int MyAge();

int main_ex48(void) {
    Hello();
    printf("나는 %d살 이야\n", MyAge());
    return 0;
}

void Hello() {
    printf("Hello World!\n");
}

int MyAge() {
    return 23;
}
