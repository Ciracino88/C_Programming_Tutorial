//
//  HW7_1.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/15/24.
// main_hw21
// hw_7_1
// 202120819 경제학과 이승호

#include <stdio.h>

int main_hw21(void) {
    int n;
    int result = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    
    int i = 1;
    while (i <= n) {
        result += 3;
        i += 1;
    }
    
    printf("%d\n", result);
    return 0;
}
