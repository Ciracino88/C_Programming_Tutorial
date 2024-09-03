//
//  work09.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/1/24.
//

#include <stdio.h>

int main10(void) {
    int a = 10;
    int b = 10;
    int c = 12;
    int d = 13;
    
    // and : && 는 주어진 조건을 모두 만족해야 참을 반환
    // or : 두 조건 중 하나만 만족하더라도 참을 반환
    if (a == b || c == d) {
        printf("a, b 가 서로 같거나 c, d 가 서로 같다.\n");
    } else {
        printf("값이 서로 다르다.\n");
    }
    
    return 0;
}
