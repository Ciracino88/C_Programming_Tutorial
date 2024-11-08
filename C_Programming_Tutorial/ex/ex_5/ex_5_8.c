//
//  ex_5_8.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/4/24.
// main_ex26
// lab5_4
// 202120819 경제학과 이승호

#include <stdio.h>

int main_ex26(void) {
    char c;
    
    printf("Enter the character: ");
    scanf("%c", &c);
    
    if (c == 'K' || c == 'k') {
        printf("KBS 이다.\n");
    }
    
    else if (c == 'E' || c == 'e') {
        printf("EBS 이다.\n");
    }
    
    else if (c == 'M' || c == 'm') {
        printf("MBC 이다.\n");
    }
    
    return 0;
}
