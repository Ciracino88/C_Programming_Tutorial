//
//  ex_4_5.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/24/24.
// // 경제학과 202120819 이승호

#include <stdio.h>

int main_ex15(void) {
    int default_w;
    int spend;
    int bill = 0;
    printf("기본 요금? ");
    scanf("%d", &default_w);
    printf("월 사용량(kWh)? ");
    scanf("%d", &spend);
    
    bill += default_w;
    bill += spend * 190;
    printf("전기 요금: %d 원\n", bill);
    return 0;
}
