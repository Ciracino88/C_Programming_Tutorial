//
//  ex_4_4.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/24/24.
// 경제학과 202120819 이승호

#include <stdio.h>

int main_ex14(void) {
    int a, b;
    printf("Input two integers: ");
    scanf("%d %d", &a, &b);
    printf("+%d = %d\n", a, a);
    printf("-%d = %d\n", b, -b);
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d %% %d = ", a, b, a%b);
    
    
    return 0;
}
