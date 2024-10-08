//
//  ex_6_4.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/8/24.
//

#include <stdio.h>

int main_ex32(void) {
    for (int i = 0; i <= 5; i++) {
        printf("%d\n", i);
    }
    
    // 두 번째 파라미터로 들어가는 조건식이 참일 때만 반복문을 실행함.
    for (int i = 10; i <= 0; i--) {
        printf("%d\n", i);
    }
    
    
    return 0;
}
