//
//  ex_7_6.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/15/24.
// main_ex44
// lab_7_4
// 202120819 경제학과 이승호

#include <stdio.h>

int main_ex44(void) {
    // 소수는 1과 자기 자신으로 나눌 수 있는 수.
    
    int n;
    
    printf("양의 정수? ");
    scanf("%d", &n);
    
    int i = n;
    
    // 특이점 처리 : 1 이하의 수는 다 소수 아님.
    if (i <= 1) {
        printf("%d 은 소수가 아니다\n", i);
        return 0;
    }
    
    // 2보다 클 때 실행. 2가 오면 그냥 소수로 판정.
    while (i > 2) {
        i =  i - 1; // 7이 주어진다면 6부터 확인을 시작.
        
        // 주어진 수를 나눠떨어지게 한다면 소수가 아님
        if (n % i == 0) {
            printf("%d 은 소수가 아니다.\n", n);
            return 0;
        }
        
        else {
            continue;
        }
    }
    printf("%d 은 소수이다.\n", n);
    return 1;
}
