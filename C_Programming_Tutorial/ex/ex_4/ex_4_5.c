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
    const int per_electric = 190;
    
    printf("기본 요금? ");
    scanf("%d", &default_w);
    printf("월 사용량(kWh)? ");
    scanf("%d", &spend);
    
    default_w += default_w + (spend * per_electric);
    printf("전기 요금: %d 원\n", default_w);
    return 0;
}
