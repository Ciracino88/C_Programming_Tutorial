//
//  ex_10_2.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/8/24.
// main_ex57
// 202120819 경제학과 이승호
// lab_10_2

#include <stdio.h>

// x 를 0이 아닌 모든 실수로 가정
// 문제 부분 : 0의 0승
int xPoswer(int x, int y);

int main_ex57(void) {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    printf("%d 의 %d 승은 %d 이다\n", x, y, xPoswer(x, y));
    
    return 0;
}

int xPoswer(int x, int y) {
    if (y == 0) {
        return 1;
    } else {
        return x * xPoswer(x, y - 1);
    }
}
