//
//  HW11_1.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/17/24.
// main_hw30
// hw_11_1
// 202120819 경제학과 이승호

#include <stdio.h>
#define SIZE 10

int main_hw30(void) {
    int arr[SIZE];
    int i;
    int diff; // 공차
    
    // 1번째 항의 값과 공차
    printf("첫 번째 항? ");
    scanf("%d", &arr[0]);
    printf("공차? ");
    scanf("%d", &diff);
    
    for (i = 1; i < SIZE; i++) {
        arr[i] = arr[i-1] + diff;
    }
    
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
