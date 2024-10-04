//
//  HW5_3.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/4/24.
//  main_hw15
//  경제학과 202120819 이승호

#include <stdio.h>

int main_hw15(void) {
    int year;
    
    printf("Enter the year: ");
    scanf("%d", &year);
    
    // 윤년 조건 : 4로 나눠 떨어지고 100으로는 나눠떨어지지 않는다.
    // 400으로 나눠떨어지면 윤년이다.
    
    // 매우 특수한 경우 : 4와 100 둘다로 나눠떨어짐
    if (year % 400 == 0) {
        printf("%d 년은 윤년이다.\n", year);
        printf("2월이 29 일이다.\n");
    }
    
    // 윤년은 4로 나눠떨어지고 100으로는 나눠떨어지지 않는다.
    else if (year % 4 == 0 && year % 100 != 0) {
        printf("%d 년은 윤년이다.\n", year);
        printf("2월이 29 일이다.\n");
    }
    
    else {
        printf("윤년이 아니다.\n");
        printf("2월이 28 일이다.\n");
    }
    return 0;
}
