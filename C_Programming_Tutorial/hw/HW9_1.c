//
//  HW9_1.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/29/24.
// main_hw26
// hw_9_1
// 202120819 경제학과 이승호

#include <stdio.h>

void print5Chars(char ch, int n);

int main_hw26(void) {
    print5Chars('*', 5);
    print5Chars('@', 7);
    print5Chars('1', 10);
    return 0;
}

void print5Chars(char ch, int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", ch);
    }
    printf("\n");
}
