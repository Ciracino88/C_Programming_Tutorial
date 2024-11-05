//
//  ex_11_2.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/5/24.
// main_ex57
// 202120819 경제학과 이승호

#include <stdio.h>

// 마지막 인덱스부터 출력을 시작
void display(int num) {
    if (num == 1) {
        printf("%d번째 인사 : 안녕하세요\n", num);
    } else {
        display(num - 1);
        printf("%d번째 인사 : 안녕하세요\n", num);
    }
}

// 프린트와 재귀함수의 순서를 바꾸면 : 처음 인덱스부터 출력을 시작
void display2(int num) {
    if (num == 1) {
        printf("%d번째 인사 : 안녕하세요\n", num);
    } else {
        printf("%d번째 인사 : 안녕하세요\n", num);
        display(num - 1);
    }
}

int main_ex57(void) {
    display(5);
    printf("----------------\n");
    display2(5);
    return 0;
}
