//
//  ex_7_4.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/15/24.
// main_ex42
// lab_7_2
// 202120819 경제학과 이승호

#include <stdio.h>

int main_ex42(void) {
    int n;
    int total = 0;
    int max = 0;
    
    printf("Enter a student number: ");
    scanf("%d", &n);
    
    int n1 = n;
    while (n1 > 0) {
        int score;
        printf("Enter a score: ");
        scanf("%d", &score);
        if (score > max) {
            max = score;
        }
        total += score;
        n1 -= 1;
    }
    
    printf("The total is %d\n", total);
    printf("The max is %d\n", max);
    return 0;
}
