//
//  ex_5_4.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/1/24.
// main_ex22

#include <stdio.h>

int main_ex22(void) {
    int num1;
    int num2;
    char op;
    
    printf("수식 입력 : ");
    
    // 이렇게 같이 받는 경우에는 버퍼를 비우지 않아도 됨.
    scanf("%d %c %d", &num1, &op ,&num2);
    
    if (op == '+') {
        printf("%d %c %d = %d\n", num1, op, num2, num1 + num2);
    }
    
    else if (op == '-') {
        printf("%d %c %d = %d\n", num1, op, num2, num1 - num2);
    }
    
    else if (op == '*') {
        printf("%d %c %d = %d\n", num1, op, num2, num1 * num2);
    }
    
    else if (op == '/') {
        printf("%d %c %d = %d\n", num1, op, num2, num1 / num2);
    }
    
    else {
        printf("연산자 오류\n");
    }
    
    return 0;
}
