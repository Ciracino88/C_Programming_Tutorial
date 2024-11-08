//
//  ex_6_6.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/8/24.
// main_ex34
// lab_6_1
// 202120819 경제학과 이승호

#include <stdio.h>

int main_ex34(void) {
    int num;
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    printf("정수? ");
    scanf("%d", &num);
    
    for (int i = 0; i <= num; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}
