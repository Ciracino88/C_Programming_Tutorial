//
//  ex_9_3.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/29/24.
// main_ex51
// lab9_2
// 202120819 경제학과 이승호

#include <stdio.h>

void get_sum(int n);

int main_ex51(void) {
    int num;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    get_sum(num);
    return 0;
}

void get_sum(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        count += i;
    }
    printf("%d\n", count);
}
