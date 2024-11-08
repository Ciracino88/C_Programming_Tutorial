//
//  ex3_3.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/10/24.
//

#define HOURLY_WAGE 9860 // 기호상수 선언
#include <stdio.h>
int main_ex9(void) {
    int working_hours, wage;
    
    printf("working hours? ");
    scanf("%d", &working_hours);
    wage = working_hours * HOURLY_WAGE;
    
    printf("HOURLY_WAGE\t:%9d\n", HOURLY_WAGE);
    printf("your_wage\t:%9d\n", wage);
    
    return 0;
}
