//
//  HW4_1.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/24/24.
//
// 202120819 경제학과 이승호
#include <stdio.h>

int main_hw8(void) {
    int num;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    printf("\n10000 의 자리수: %d\n", num/10000);
    num = num%10000;
    
    printf("%5d 의 자리수: %d\n", 1000, (num/1000));
    num = num%1000;
    
    printf("%5d 의 자리수: %d\n", 100, num/100);
    num = num%100;
    
    printf("%5d 의 자리수: %d\n", 10, num/10);
    num = num%10;
    
    printf("%5d 의 자리수: %d\n", 1, num);
    
    return 0;
}
