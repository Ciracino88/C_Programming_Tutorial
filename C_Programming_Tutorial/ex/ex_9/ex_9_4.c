//
//  ex_9_4.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/29/24.
// main_ex52
// lab9_3
// 202120819 경제학과 이승호

#include <stdio.h>

void multiples(int num, int count);

int main_ex52(void) {
    int num;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    while (num > 0) {
        multiples(num, 10);
        printf("Enter the number: ");
        scanf("%d", &num);
    }
    return 0;
}

void multiples(int num, int count) {
    for (int i = 1; i <= count; i++) {
        printf("%d ", num * i);
    }
    printf("\n");
}
