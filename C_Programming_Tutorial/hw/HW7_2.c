//
//  HW7_2.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/15/24.
// main_hw22
// hw_7_2
// 202120819 경제학과 이승호

#include <stdio.h>

int main_hw22(void) {
    int total = 0;
    
    int n;
    printf("Enter a student number: ");
    scanf("%d", &n);
    
    int i = 1;
    while (i <= n) {
        int s;
        printf("Enter a score: ");
        scanf("%d", &s);
        total += s;
        i++;
    }
    
    printf("The total is %d\n", total);
    printf("The average is %.1f\n", (float)total/n);
    return 0;
}
