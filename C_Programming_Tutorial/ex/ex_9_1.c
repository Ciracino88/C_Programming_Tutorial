//
//  ex_9_1.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/29/24.
// lab9_0
// main_ex49
// 202120819 경제학과 이승호

#include <stdio.h>
void print5Stars();

int main_ex49(void) {
    print5Stars();
    print5Stars();
    print5Stars();
    return 0;
}

void print5Stars() {
    int i;
    
    for (i = 0; i < 5 ; i++) {
        printf("*");
    }
    printf("\n");
}
