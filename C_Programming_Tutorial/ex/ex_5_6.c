//
//  ex_5_6.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/1/24.
// main_ex24
// lab5_1
// 202120819 경제학과 이승호

#include <stdio.h>

int main_ex24(void) {
    int num;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    // 음수일 때만 변환
    if (num < 0) {
        printf("%d\n", -num);
        printf("END\n");
    }
    
    else {
        printf("END\n");
    }
    return 0;
}
