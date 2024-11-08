//
//  ex_10_1.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/8/24.
// main_ex56
// 202120819 경제학과 이승호
// lab_10_1
#include <stdio.h>

int twoPower(int x);

int main_ex56(void) {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("2 의 %d승은 %d 이다\n", n, twoPower(n));
    
    return 0;
}

int twoPower(int x) {
    if (x == 0) {
        return 1;
    } else {
        return 2 * twoPower(x - 1);
    }
}
