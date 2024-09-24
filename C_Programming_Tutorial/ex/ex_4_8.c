//
//  ex_4_8.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/24/24.
// 경제학과 202120819 이승호

#include <stdio.h>
int main_ex18(void) {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    n % 2 == 1 ? printf("%d 는 홀수이다.\n", n) : printf("%d 는 짝수이다.\n", n);
    return 0;
}
