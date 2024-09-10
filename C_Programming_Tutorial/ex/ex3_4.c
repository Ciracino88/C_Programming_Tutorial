//
//  ex3_4.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/10/24.
// ex10

#include <stdio.h>
int main_ex10(void) {
    char ch;
    int value;
    
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    
    printf("%c, %d\n", ch, ch);
    
    printf("Enter an value: ");
    scanf("%d", &value);
    
    printf("%d, %c\n", value, value);
    
    return 0;
}
