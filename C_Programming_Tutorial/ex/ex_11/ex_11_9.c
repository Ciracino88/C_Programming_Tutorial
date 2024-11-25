//
//  ex_11_9.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/12/24.
// main_ex67
// 202120819 경제학과 이승호

#include <stdio.h>
#define arr_size 5

int main_ex67(void) {
    int arr[arr_size], arr2[arr_size];
    
    printf("A 값 입력: ");
    for (int i = 0; i < arr_size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("B 값 입력: ");
    for (int i = 0; i < arr_size; i++) {
        scanf("%d", &arr2[i]);
    }
    
    for (int i = 0; i < arr_size; i++) {
        if (arr[i] != arr2[i]) {
            return 1;
        }
    }
    return 0;
}
