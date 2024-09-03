//
//  work04.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/1/24.
//

#include <stdio.h>

// ++ 연산자
int main5(void) {
    int a = 10;
    printf("a: %d\n", a);
    a++;
    printf("a: %d\n", a);
    
    // for loop
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
    
    // while loop
    int j = 1;
    while (j <= 10) {
        printf("j: %d\n", j);
        j++;
    }
    
    return 0;
}
