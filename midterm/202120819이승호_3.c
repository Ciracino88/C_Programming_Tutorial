//
//  202120819이승호_3.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/22/24.
//

#include <stdio.h>

int main_3(void) {
    int m;
    int result = 1;
    
    printf("경계값 입력: ");
    scanf("%d", &m);
    
    int i = 1;
    while (1) {
        if (i * result >= m) {
            break;
        }
        
        else {
            result *= i;
            i++;
        }
    }
    
    printf("%d부터 %d까지 곱은 %d입니다.\n", 1, i, result);
    return 0;
}
