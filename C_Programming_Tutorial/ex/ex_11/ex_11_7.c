//
//  ex_11_7.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/12/24.
// main_ex65
// 202120819 경제학과 이승호

#include <stdio.h>
#define arr_size 5

int absolute(int x) {
    return x > 0 ? x : -x;
}

int main_ex65(void) {
    int x[arr_size] = { -4, 0, 28, 3, -12 };
    
    for (int i = 0; i < arr_size; i++) {
        printf("%d ", absolute(x[i]));
    }
    printf("\n");
    return 0;
}
