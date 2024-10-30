//
//  ex_9_5.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/29/24.
// main_ex53
// lab9_4
// 202120819 경제학과 이승호

#include <stdio.h>

void divisors(int n);

int main_ex53(void) {
    int num;
    
    printf("양의 정수?");
    scanf("%d", &num);
    
    while (num != 0) {
        divisors(num);
        printf("양의 정수?");
        scanf("%d", &num);
    }
    return 0;
}

void divisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count += 1;
            printf("%d ", i);
        }
        else {
            continue;
        }
    }
    printf("=> 총 %d개", count);
    printf("\n");
}
