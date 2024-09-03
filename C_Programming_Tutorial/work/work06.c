//
//  work06.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/1/24.
//

#include <stdio.h>

int main7(void) {
    // 구구단 예제
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d X %d = %d\n", i, j, i*j);
        }
    }
    
    // 별 피라미드
    
    // 줄바꿈을 위한 반복문
    for (int i = 1; i <= 5; i++) {
        // 별 갯수를 위한 반복문
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    // 거꾸로 별 피라미드
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 5; j > i; j--) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
