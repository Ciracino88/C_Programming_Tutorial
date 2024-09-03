//
//  work05.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/1/24.
//

#include <stdio.h>

int main6(void) {
    // do while loop
    int i = 1;
    
    do {
        printf("i: %d\n", i++); // while 조건 충족할 때까지 실행할 코드.
    } while (i <= 10); // 10 이하가 될 때까지 do 문을 실행해라.
    
    // 이중 반복문
    for (int j = 1; j < 4; j++) {
        for (int k = 1; k < 5; k++) {
            printf("%d %d\n", j, k);
        }
    }
    
    return 0;
}
