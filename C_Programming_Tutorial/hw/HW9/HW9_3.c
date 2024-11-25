//
//  HW9_3.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/30/24.
// main_hw28
// hw_9_3
// 202120819 경제학과 이승호

#include <stdio.h>

int getMax(int x, int y, int z);

int main_hw28(void) {
    int num1, num2, num3;
    int bigNumber;
    
    printf("Enter a number: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    bigNumber = getMax(num1, num2, num3);
    
    printf("Big number is %d.\n", bigNumber);
    return 0;
}

int getMax(int x, int y, int z) {
    int a = x > y ? x : y;
    int b = a > z ? a : z;
    
    return b;
}
