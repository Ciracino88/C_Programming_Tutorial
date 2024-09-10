//
//  HW3_1.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/10/24.
//

// 경제학과 202120819 이승호
#include <stdio.h>

int main_hw4(void) {
    float base, height;
    float area;
    
    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);
    
    area = base * height / 2;
    printf("The area of triangle is %.2f\n", area);
    
    return 0;
}
