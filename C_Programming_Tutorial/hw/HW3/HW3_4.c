//
//  HW3_4.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/10/24.
//
// 경제학과 202120819 이승호
#include <stdio.h>

int main_hw7(void) {
    char ch;
    
    printf("Enter an upper letter(A-Z): ");
    scanf("%c", &ch);
    
    // 97 - 65 = 32
    // 대문자 -> 아스키 -> +32 -> 아스키 -> 소문자
    printf("Character given is %c(%d)\n", ch, ch);
    
    printf("The lower case letter is %c(%d)\n", ch+32, ch+32);
    printf("The next character is %c(%d)\n", ch+1, ch+1);
    return 0;
}
