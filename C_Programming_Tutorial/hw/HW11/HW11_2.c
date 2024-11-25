//
//  HW11_2.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/17/24.
// main_hw31
// hw_11_2
// 202120819 경제학과 이승호

#include <stdio.h>
#define SIZE 10

int main_hw31(void) {
    double arrayA[SIZE] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
    double arrayB[SIZE];
    double arrayC[SIZE];
    int i;
    
    for (i = 0; i < SIZE; i++) {
        arrayB[i] = arrayA[i];
    }
    
    for (i = 0; i < SIZE; i++) {
        arrayC[i] = arrayA[SIZE - i - 1];
    }
    
    printf("arrayA: ");
    for (i = 0; i < SIZE; i++) {
        printf("%.1f ", arrayA[i]);
    }
    printf("\narrayB: ");
    for (i = 0; i < SIZE; i++) {
        printf("%.1f ", arrayB[i]);
    }
    printf("\narrayC: ");
    for (i = 0; i < SIZE; i++) {
        printf("%.1f ", arrayC[i]);
    }
    printf("\n");
    
    return 0;
}
