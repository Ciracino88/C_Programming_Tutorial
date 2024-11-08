//
//  ex_4_2.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/24/24.
//

#include <stdio.h>

// ++ 이 변수 뒤에 있으면 다른 연산을 수행 후 나중에 수행 하는 것

int main_ex12(void) {
    int x = 3;
    int y = 5;
    int z;
    
    // x와 y의 합연산을 먼저 수행 : 3 + 5 = 8
    // 위 연산 결과를 z 에 저장 : z = 8
    // 이후 x 를 1 증가.
    z = x++ + y;
    printf("%d\n", z);
    
    // 현재 x = 4, y = 5
    // 먼저 x 를 1 증가 : 5
    // 4 + 5 = 9
    z = ++x + y;
    printf("%d\n", z);
    
    x = 5;
    y = 3;
    
    // 참이면 1 아니면 0을 반환.
    int a = x && y; // x,y 둘 다 0이 아니면 1, 둘다 0이면 0
    int b = x || y; // x,y 중 하나라도 0이 아니면 1, 둘다 0이면 0
    int c = !x; // x가 0이면 1, 아니면 0
    
    printf("%d, %d, %d\n", a, b, c);
    
    int d = x == 5;
    int e = 1 < x && x < 6; // 1 < x < 6 : 이런 거 못씀.. 파이썬에서는 가능
    
    printf("%d\n", d);
    printf("%d\n", e);
    
    return 0;
}
