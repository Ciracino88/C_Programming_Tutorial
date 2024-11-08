//
//  ex_7_1.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/15/24.
// main_ex39
//
// 202120819 경제학과 이승호
#include <stdio.h>

// for 문의 구조
// for (초기식 조건식 증감식)
// 조건식잍 참일 때만 반복문을 돔.
// 조건을 벗어나면 반복문 탈출
// 처리 과정 : 조건 확인 - 증감식 수행 - 내부 코드 실행 - 조건 확인 ...

int main_ex39(void) {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 4; j++) {
            printf("@");
        }
        printf("\n");
    }
    
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j<= 4; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
