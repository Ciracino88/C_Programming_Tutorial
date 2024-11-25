//
//  ex_11_10.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/12/24.
// main_ex68
// 202120819 경제학과 이승호

#include <stdio.h>
#define arr_size 5

int main_ex68(void) {
    int arr[arr_size][arr_size];
    for (int i = 0; i < arr_size; i++) {
        for (int j = 0; j < arr_size; j++) {
            arr[i][j] = i + j;
        }
    }
    
    for (int i = 0; i < arr_size; i++) {
        for (int j = 0; j < arr_size; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
