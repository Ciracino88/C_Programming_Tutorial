//
//  HW3_2.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/10/24.
//

// 경제학과 202120819 이승호
#include <stdio.h>

int main_hw5(void) {
    int m;
    
    printf("Enter the total minutes: ");
    scanf("%d", &m);
    printf("%d minutes\n", m);
    printf("%dh %dm\n", m/60, m%60);
    return 0;
}
