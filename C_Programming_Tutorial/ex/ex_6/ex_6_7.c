//
//  ex_6_7.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/8/24.
//
// lab_6_2
// main_ex35
// 202120819 경제학과 이승호
#include <stdio.h>

int main_ex35(void) {
    int num;
    int sum = 0;
    
    printf("정수 5개를 입력하세요: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num);
        sum += num;
    }
    printf("합계: %d\n", sum);
    return 0;
}
