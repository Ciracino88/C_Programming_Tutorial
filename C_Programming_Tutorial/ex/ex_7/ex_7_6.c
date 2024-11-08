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
    int is_prime_number = 0; // 반복문에서 특이점을 못 찾으면 소수라고 판정.
    
    printf("양의 정수? ");
    scanf("%d", &n);
    
    int i = n;
    
    // 특이점 처리 : 1 이하의 수는 다 소수 아님.
    if (i <= 1) {
        is_prime_number = 1;
    }
    
    // 특이점 처리 2 : 2는 소수. (이후 짝수를 거르기 위한 작업)
    else if (i == 2) {
        is_prime_number = 0;
    }
    
    // 3 이상의 정수에 대해
    else {
        // 짝수 거르기
        if (i % 2 == 0) {
            is_prime_number = 1;
        }
        
        while (i > 3) {
            i =  i - 2; // 7이 주어진다면 5부터 확인을 시작.
            
            // 주어진 수를 나눠떨어지게 한다면 소수가 아님
            if (n % i == 0) {
                is_prime_number = 1;
                break;
            }
            
            else {
                continue;
            }
        }
    }
    
    if (is_prime_number == 0) {
        printf("%d 은 소수이다.\n", n);
        return 0;
    } else {
        printf("%d 은 소수가 아니다.\n", n);
        return 1;
    }
}
