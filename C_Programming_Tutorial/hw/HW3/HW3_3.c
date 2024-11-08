//
//  HW3_3.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/10/24.
//

// 경제학과 202120819 이승호
#include <stdio.h>

int main_hw6(void) {
    
    double square_feet;
    int square_meter;
    const double CONVERT_METER_TO_FEET = 0.3025;
    
    printf("Enter the square meter: ");
    scanf("%d", &square_meter);
    
    square_feet = square_meter * CONVERT_METER_TO_FEET;
    printf("%d is %.1f square feet\n", square_meter, square_feet);
    
    return 0;
}
