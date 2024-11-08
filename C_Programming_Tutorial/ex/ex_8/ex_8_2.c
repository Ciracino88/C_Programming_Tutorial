//
//  ex_8_2.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/29/24.
// main_ex46

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_ex46(void) {
    // 임의의 정수 생성 후 홀짝 판단
    srand(time(NULL));
    
    int i = rand()%1000+1;
    if (i%2 == 1) {
        printf("%d 는 홀수입니다.\n", i);
    } else {
        printf("%d 는 짝수입니다.\n", i);
    }
    return 0;
}
