//
//  ex_11_6.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/5/24.
// main_ex61
// 202120819 경제학과 이승호

#include <stdio.h>
#define arr_size 5

int main_ex61(void) {
    int arr[arr_size] = {1,2,3,4,5};
    int x[arr_size] = {1,2,3};
    int y[arr_size] = {0};
    int z[] = {-1, 0, 1};
    int i;
    
    printf("arr = ");
    for (i = 0; i < arr_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("x = ");
    for (i = 0; i < arr_size; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
    
    printf("y = ");
    for (i = 0; i < arr_size; i++) {
        printf("%d ", y[i]);
    }
    printf("\n");
    
    printf("z = ");
    for (i = 0; i < sizeof(z) / sizeof(z[0]); i++) {
        printf("%d ", z[i]);
    }
    printf("\n");
    return 0;
}
