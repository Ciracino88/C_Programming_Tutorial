//
//  HW6_1.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/8/24.
// main_hw17
// hw_6_1
// 202120819 경제학과 이승호

#include <stdio.h>

int main_hw17(void) {
    int num;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    for (int i = 1; i <= 9; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    
    return 0;
}
