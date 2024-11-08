//
//  ex_4_7.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/24/24.
// 경제학과 202120819 이승호

#include <stdio.h>
int main_ex17(void) {
    int fahrentheit;
    
    printf("Enter the fahrentheit temperature: ");
    scanf("%d", &fahrentheit);
    printf("%d F is %.2f C\n", fahrentheit, (double)(fahrentheit - 32) * 5.0 / 9.0);
    return 0;
}
