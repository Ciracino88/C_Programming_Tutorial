//
//  HW2_3.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/5/24.
//

// 202120819 이승호

#include <stdio.h>
// #define _CRT_SECURE_NO_WARNINGS

int main_hw3(void) {
    double dollars;
    double won;
    int rate = 1172;
    
    printf("달러? ");
    scanf("%lf", &dollars);
    
    won = dollars * rate;
    
    printf("$%.2lf는 %.0lf원입니다.\n", dollars, won);
    
    return 0;
}
