//
//  202120819이승호_2.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/22/24.
//

#include <stdio.h>

int main_2(void) {
    int n;
    int prime = 0;
    int not_prime = 0;
    
    printf("n을 입력하세요: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            not_prime += 1;
        }
        
        else {
            int j = 2;
            
            // 지금 탐색하는 수가 소수라고 미리 가정
            prime += 1;
            for (int j = 2; j < i; j++) {
                // 소수가 아닐 때
                if (i % j == 0) {
                    not_prime += 1;
                    // 가정해서 올렸던 값을 돌려놓음
                    prime -= 1;
                    break;
                }
            }
        }
    }
    
    printf("소수의 개수: %d\n", prime);
    printf("비소수의 개수: %d\n", not_prime);
    printf("소수와 비소수의 비율: %.2f\n", (float)prime/not_prime);
    
    return 0;
}
