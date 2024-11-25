//
//  HW11_3.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/17/24.
// main_hw32
// hw_11_3
// 202120819 경제학과 이승호

#include <stdio.h>

void print_star(int num);

int main_hw32(void) {
    int n;
    printf("Enter the number of scores(<=20): ");
    scanf("%d", &n);
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter a score: ");
        scanf("%d", &arr[i]);
    }
    
    for (int k = 0; k < n; k++) {
        printf("Student\t%d: ", k);
        print_star(arr[k]);
    }
    return 0;
}

void print_star(int num) {
    for (int j = 0; j < num; j++) {
        printf("*");
    }
    printf("\n");
}
