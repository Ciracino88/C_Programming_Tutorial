//
//  ex_6_5.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/8/24.
//

#include <stdio.h>

int main_ex33(void) {
    int num = 1234567;
    
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d 는 약수입니다.\n", i);
        }
    }
    return 0;
}
