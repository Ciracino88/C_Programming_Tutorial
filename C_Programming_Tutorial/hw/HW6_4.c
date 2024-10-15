//
//  HW6_4.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/15/24.
// main_hw20
// hw_6_4
// 202120819 경제학과 이승호

#include <stdio.h>

int main_hw20(void) {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (8-i); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
