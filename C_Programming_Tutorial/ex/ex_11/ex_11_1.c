//
//  ex_11_1.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/5/24.
// main_ex59
// 202120819 경제학과 이승호

#include <stdio.h>

int fact(int num) {
    if (num <= 1) {
        return 1;
    } else {
        return num * fact(num - 1);
    }
}

int main_ex59(void) {
    printf("%d\n", fact(10));
    return 0;
}
