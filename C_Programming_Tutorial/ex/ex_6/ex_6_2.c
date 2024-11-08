//
//  ex_6_2.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/8/24.
// main_ex30
// lab_5_5

#include <stdio.h>

int main_ex30(void) {
    char oper;
    int num1, num2;
    
    printf("Enter an operator. ");
    scanf("%c", &oper);
    while(getchar() != '\n');
    printf("Enter the first operand: ");
    scanf("%d", &num1);
    printf("Enter the second operand: ");
    scanf("%d", &num2);
    
    switch (oper) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1+num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1-num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1*num2);
            break;
        case '/':
            printf("%d / %d = %d\n", num1, num2, num1/num2);
            break;
            
        default:
            break;
    }
    return 0;
}
