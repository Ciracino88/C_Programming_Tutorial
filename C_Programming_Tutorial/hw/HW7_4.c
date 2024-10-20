//
//  HW7_4.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/15/24.
// main_hw24
// hw_7_4
// 202120819 경제학과 이승호

#include <stdio.h>

int main(void) {
    int answer = 111;
    int guess;
    int count = 0;
    do {
        printf("정답을 추측해 보시오:");
        scanf("%d", &guess);
        count += 1;
        
        if (guess > answer) {
            printf("더 작은 수를 말해봐\n");
        }
        if (guess < answer) {
            printf("더 큰 수를 말해봐\n");
        }
    } while (guess != answer);
    printf("\n축하합니다. 정답입니다.\n");
    printf("시도 횟수 : %d\n", count);
    return 0;
}
