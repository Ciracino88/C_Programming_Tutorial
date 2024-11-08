//
//  ex_7_5.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/15/24.
// main_ex43
// lab_7_3
// 202120819 경제학과 이승호

#include <stdio.h>

int main_ex43(void) {
    float n1;
    float n2;
    char op;
    char yesno;
    
    do {
        printf("수식? ");
        scanf("%f %c %f", &n1, &op, &n2);
        
        if (op == '+') {
            printf("%f %c %f = %f\n", n1, op, n2, n1 + n2);
        }
        
        else if (op == '-') {
            printf("%f %c %f = %f\n", n1, op, n2, n1 - n2);
        }
        
        else if (op == '*') {
            printf("%f %c %f = %f\n", n1, op, n2, n1 * n2);
        }
        
        else if (op == '/') {
            printf("%f %c %f = %f\n", n1, op, n2, n1 / n2);
        }
        
        else {
            printf("잘못된 수식입니다.\n");
            break;
        }
        
        while(getchar() != '\n');
        printf("계속 하시겠습니까(Y/N)? ");
        scanf("%c", &yesno);
    } while (yesno == 'y');
    
    return 1;
}
