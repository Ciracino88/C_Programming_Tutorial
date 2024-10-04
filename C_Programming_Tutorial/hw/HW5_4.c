//
//  HW5_4.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/4/24.
//  main_hw16
//  경제학과 202120819 이승호

#include <stdio.h>

int main(void) {
    int used_kwh;
    int df;
    int per_bill;
    
    // 300 이하는 기본 요금 1000, 넘어가면 5000
    // 300 이하는 1당 100, 넘어가면 1당 200
    
    printf("월 사용량 (kWh)? ");
    scanf("%d", &used_kwh);
    
    if (used_kwh > 300) {
        df = 5000;
        per_bill = 30000 + (used_kwh - 300) * 200; // 300을 넘는 시점에서 300 * 100 은 반드시 생김
    }
    
    else {
        df = 1000;
        per_bill = used_kwh * 100;
    }
    
    printf(" - 기본요금:\t%8d원\n", df);
    printf(" - 전력량요금:\t%8d원\n", per_bill);
    printf("----------------------------------\n");
    printf("전기 요금 합계:\t%8d원\n", df + per_bill);
    
    return 0;
}
