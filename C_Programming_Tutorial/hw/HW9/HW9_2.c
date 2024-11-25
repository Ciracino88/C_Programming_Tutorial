//
//  HW9_2.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/30/24.
// main_hw27
// hw_9_2
// 202120819 경제학과 이승호

#include <stdio.h>

int sumMToN(int m, int n);

int main_hw27(void) {
    printf("%d부터 %d까지의 합은 %d\n", 2, 5, sumMToN(2, 5));
    printf("%d부터 %d까지의 합은 %d\n", 3, 7, sumMToN(3, 7));
    printf("%d부터 %d까지의 합은 %d\n", 2, 10, sumMToN(2, 10));
    return 0;
}

int sumMToN(int m, int n) {
    int count = 0;
    
    for (int i = m; i <= n; i++) {
        count += i;
    }
    
    return count;
}
