//
//  HW4_3.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/26/24.
// main_hw10
// 경제학과 202120819 이승호
#include <stdio.h>

int main_hw10(void) {
    int water;
    int salt;
    
    printf("물(g)? ");
    scanf("%d", &water);
    printf("소금(g)? ");
    scanf("%d", &salt);
    printf("소금물 농도: %.2f %%\n", salt * 100/(float)(water + salt));
    
    return 0;
}
