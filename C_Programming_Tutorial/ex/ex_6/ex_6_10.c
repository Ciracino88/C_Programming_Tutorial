//
//  ex_6_10.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/8/24.
// main_ex38
// lab_6_5
// 202120819 경제학과 이승호
#include <stdio.h>

int main_ex38(void) {
    int n;
    int num;
    int count = 0;
    
    printf("Enter the # of integers: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter an integer: ");
        scanf("%d", &num);
        if (num % 2 == 0) {
            count += 1;
        }
    }
    
    printf("The number of even numbers is %d.\n", count);
    return 0;
}
