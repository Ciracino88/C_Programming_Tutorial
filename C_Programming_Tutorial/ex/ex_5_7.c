//
//  ex5_7.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/4/24.
// main_ex25
// lab5_2
// 202120819 경제학과 이승호

#include <stdio.h>

int main_ex25(void) {
//    int num;
//    
//    printf("Enter the number: ");
//    scanf("%d", &num);
//    
//    if (num % 2 == 1) {
//        printf("홀수입니다.\n");
//    }
//    
//    else {
//        printf("짝수입니다.\n");
//    }
    
    int num;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    if (num % 2 == 1) {
        printf("홀수입니다.\n");
        printf("나머지가 %d 입니다.\n", num % 2);
    }
    
    else {
        printf("짝수입니다.\n");
        printf("몫은 %d 입니다.\n", (int)(num / 2));
    }
    
    return 0;
}
