//
//  ex_6_9.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/8/24.
// main_ex37
// lab_6_4
// 202120819 경제학과 이승호
#include <stdio.h>

int main_ex37(void) {
    int m, n;
    int result = 1;
    printf("m = ");
    scanf("%d", &m);
    
    printf("n = ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        result *= m;
    }
    printf("%d 을 %d 번 곱한 결과 = %d\n", m, n, result);
    return 0;
}
