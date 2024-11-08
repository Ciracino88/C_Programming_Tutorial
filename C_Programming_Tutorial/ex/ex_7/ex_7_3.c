//
//  ex_7_3.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/15/24.
// main_ex41
// lab_7_1
// 202120819 경제학과 이승호

#include <stdio.h>

int main_ex41(void) {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int m = n;
    int result = 1;
    while (m > 0) {
        result *= m;
        m -= 1;
    }
    printf("1 부터 %d 까지 곱= %d\n", n, result);
    return 0;
}
