//
//  ex_9_2.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/29/24.
// main_ex50
// lab9_1
// 202120819 경제학과 이승호

#include <stdio.h>

void printManyStars(int num);

int main_ex50(void) {
    printManyStars(3);
    printManyStars(4);
    printManyStars(5);
    return 0;
}

void printManyStars(int num) {
    int i;
    for (i = 0; i < num; i++) {
        printf("*");
    }
    printf("\n");
}
