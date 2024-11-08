//
//  ex_5_2.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/1/24.
// main_ex20

#include <stdio.h>

int main_ex20(void) {
    int num1;
    int num2;
    char op;
    char c;
    
    // 숫자 데이터를 입력하고, 이후 문자 데이터를 입력받는 상황에서 버퍼를 비워줘야 함.
    
    printf("버퍼를 비우지 않으면?\n");
    printf("숫자 입력 : ");
    scanf("%d %d", &num1, &num2);
    
    printf("%d %d\n", num1, num2);
    
    // 입력값을 넣지 않아도 알아서 엔터값이 들어감!!
    printf("연산자 입력 : ");
    scanf("%c", &op);
    
    printf("%c\n", op);
    
    
    printf("버퍼를 비우면?\n");
    printf("숫자 입력 : ");
    scanf("%d %d", &num1, &num2);
    
    printf("%d %d\n", num1, num2);
    
    
    // 버퍼 비우기
    while(getchar() != '\n');
    printf("연산자 입력 : ");
    scanf("%c", &op);
    
    printf("%c\n", op);
    
    // 문자 데이터 입력 후, 문장 데이터를 입력받는 상황에는?
    // 버퍼를 또 비워줘야 한다!
    // 결론 : 문자열 데이터를 입력받는 상황에서는 버퍼를 비워줘야 한다.
    printf("문자열 입력 - 문자열 입력\n");
    printf("문자열 입력 : ");
    scanf("%c", &c);
    
    printf("%c\n", c);
    
    
    return 0;
}
