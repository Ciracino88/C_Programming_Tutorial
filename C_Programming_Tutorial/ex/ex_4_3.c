//
//  ex_4_3.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/24/24.
//

#include <stdio.h>

int main_ex13(void) {
    // 형변환
    printf("%.2f\n", (float)3/2);
    
    // 연산자 우선도
    // 단항 > 산술 > 관계 > 논리 > 대입 > 콤마
    // and 와 or 중에서는 and 를 먼저 사용
    
    // year % 4 == 0 && year % 100 != 0 || year % 400 == 0
    
    // 산술 연산 먼저
    // year % 4 -> year % 100 -> year % 400
    
    // 관계 연산
    // year % 4 == 0 -> year % 100 != 0 -> year % 400 == 0
    
    // 논리 연산
    // year % 4 == 0 && year % 100 != 0 -> year % 4 == 0 && year % 100 != 0 || year % 400 == 0
    
    int year = 2040;
    int a = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
    printf("%d\n", a);
    
    // 대입 연산은 오른쪽부터 연산을 수행 (z를 y에 대입 -> y를 x에 대입)
    // x = y = z
    
    return 0;
}
