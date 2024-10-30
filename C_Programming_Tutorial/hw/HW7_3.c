//
//  HW7_3.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/15/24.
// main_hw23
// hw_7_3
// 202120819 경제학과 이승호

#include <stdio.h>

int main_hw23(void) {
    int n1, n2;
    int GCD;
    
    printf("두 개의 정수를 입력하시오(큰수, 작은수): ");
    scanf("%d %d", &n1, &n2);
    
    while(1) {
        // 작은 수가 0이라면
        if (n2 == 0) {
            GCD = n1;
            break;
        }
        
        int r = n1 % n2;
        n1 = n2;
        n2 = r;
    }
    printf("GCD= %d\n", GCD);
    return 0;
}
