//
//  ex_11_8.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/12/24.
// main_ex66
// 202120819 경제학과 이승호

#include <stdio.h>
#define arr_size 10

// 피보나치 수열

int main_ex66(void) {
    int arr[arr_size] = {1, 1};
    
    
    for (int i = 2; i < arr_size; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
    
    for (int j = 0; j < arr_size; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");
    return 0;
}
