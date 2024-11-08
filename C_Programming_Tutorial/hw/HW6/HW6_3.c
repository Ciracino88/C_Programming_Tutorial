//
//  HW6_3.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/8/24.
// main_hw19
// hw_6_3
// 202120819 경제학과 이승호

#include <stdio.h>

int main_hw19(void) {
    // 65 66 67 68 69 : 나머지 4일 때 줄바꿈
    for (int i = 65; i <= 91; i++) {
        if (i % 5 == 4) {
            printf("%c\n", i);
        }
        else {
            printf("%c ", i);
        }
    }
    
    return 0;
}
