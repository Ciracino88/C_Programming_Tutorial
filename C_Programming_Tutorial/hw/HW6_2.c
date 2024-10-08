//
//  HW6_2.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/8/24.
// main_hw18
// hw_6_2
// 202120819 경제학과 이승호

#include <stdio.h>

int main_hw18(void) {
    int positive;
    int count;
    
    printf("Enter the positive number: ");
    scanf("%d", &positive);
    printf("Enter the count of multiple: ");
    scanf("%d", &count);
    
    for (int i = 1; i <= count; i++) {
        printf("%d ", positive * i);
    }
    
    return 0;
}
