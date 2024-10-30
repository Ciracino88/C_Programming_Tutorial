//
//  ex_8_1.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/29/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_ex45(void) {
    srand(time(NULL));
    
    // rand() % 100
    for (int i = 0; i < 100; i++) {
        printf("%d ", rand()%100);
    }
    printf("\n");
    // rand % 6
    // 끝점으로 나누고 시작점을 더한다.
    for (int i = 0; i < 100; i++) {
        printf("%d ", rand()%6 + 1);
    }
    printf("\n");
    // 50부터 99까지
    for (int i = 0; i < 100; i++) {
        printf("%d ", rand()%50 + 50);
    }
    printf("\n");
    return 0;
}
