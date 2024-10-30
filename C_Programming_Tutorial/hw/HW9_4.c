//
//  HW9_4.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/30/24.
//

#include <stdio.h>

int isPrime(int n);

int main(void) {
    int count = 0;
    int k = 2;
    while(count == 10) {
        if (isPrime(k) == 0) {
            count += 1;
            printf("%d번째 소수는 %d\n", count, k);
        }
        k += 1;
    }
        
    return 0;
}

int isPrime(int n) {
    // 소수면 0 리턴
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 1;
        }
    }
    return 0;
}
