//
//  ex_11_4.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/5/24.
// main_ex59
// 202120819 경제학과 이승호

#include <stdio.h>

// 재귀는 반복문으로 풀 수 있는 것만 풀 수 있다.
// 그럼 왜 재귀를 쓰죠? 반복문이 만능 아닌가요? : 반복문으로 풀기 어려울 때 재귀를 이용한다.

// 지역변수 / 전역변수

void plus(void) {
    static int count = 0;
    
    count++;
    
    printf("%d\n", count);
}
int main_ex59(void) {
    for (int i = 1; i <= 5; i++) {
        plus();
    }
    
    return 0;
}
