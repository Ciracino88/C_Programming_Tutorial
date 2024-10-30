//
//  ex2_6.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/3/24.
//

// 경제학과 202120819 이승호
#include <stdio.h>

// 반지름을 입력받아 원의 넓이를 구하기

int main_ex6(void) {
    int r;
    float s;
    
    printf("반지름을 입력해주세요 : ");
    scanf("%d", &r);
    
    s = r * r * 3.14;
    
    printf("원의 넓이는 %.2f 입니다.\n", s);
    
    return 0;
}
