//
//  HW4_2.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/26/24.
// main_hw9
// 경제학과 202120819 이승호
#include <stdio.h>

int main_hw9(void) {
    const int BASE = 32;
    const double CONVERSION_FACTOR = 9.0/5.0;
    
    double celsius;
    double fahrenheit;
    
    printf("Enter a celsius temperature: ");
    scanf("%lf", &celsius);
    
    fahrenheit = celsius * CONVERSION_FACTOR + BASE;
    printf("%6f\n", fahrenheit);
    
    return 0;
}
