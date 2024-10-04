//
//  HW4_4.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/26/24.
// main_hw11
// 경제학과 202120819 이승호
#include <stdio.h>

int main_hw11(void) {
    int month;
    printf("Enter the month: ");
    scanf("%d", &month);
    
    month >= 1 && month <= 12 ? printf("Valid month\n") : printf("Invalid month\n");
    return 0;
}
