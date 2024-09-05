//
//  HW2_2.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/5/24.
//

// 202120819 이승호
#include <stdio.h>

int main_hw2(void) {
    int radius;
    float area;
    float circumference;
    
    printf("Enter the radius: ");
    scanf("%d", &radius);
    
    area = radius * radius * 3.14;
    circumference = radius * 2 * 3.14;
    
    printf("When the radius is %d, the area is %.2f\n", radius, area);
    printf("When the radius is %d, the circumference is %7.2f\n", radius, circumference);
    
    return 0;
}
