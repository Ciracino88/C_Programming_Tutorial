//
//  ex_6_8.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/8/24.
// main_ex36
// lab_6_3
// 202120819 경제학과 이승호
#include <stdio.h>

int main_ex36(void) {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d\t", i);
        }
    }
    return 0;
}
