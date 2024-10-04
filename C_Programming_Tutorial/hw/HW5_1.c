//
//  HW5_1.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/4/24.
//  main_hw13
//  경제학과 202120819 이승호

#include <stdio.h>

int main_hw13(void) {
    int num1;
    int num2;
    int smallNumber;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    if (num1 < num2) {
        smallNumber = num1;
    }
    
    else {
        smallNumber = num2;
    }
    
    printf("The smaller number is %d\n", smallNumber);
    
    return 0;
}
