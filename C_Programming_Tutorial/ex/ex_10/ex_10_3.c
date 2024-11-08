//
//  ex_10_3.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/8/24.
// main_ex58
// 202120819 경제학과 이승호
// lab_10_3

#include <stdio.h>

int gcd(int x, int y);

int main_ex58(void) {
    int a, b, big, small;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    if (a < b) {
        big = b;
        small = a;
    } else {
        big = a;
        small = b;
    }
    
    printf("%d 와 %d 의 최대공약수는 %d\n", a, b, gcd(big, small));
    return 0;
}

int gcd(int x, int y) {
    // a를 b로 나눌 때, 몫이 q 이고 나머지가 r이면, a와 b의 gcd 는 b와 r의 최대공약수와 같다.
    // r이 0이면 gcd 는 b 이다.
    
    if (x % y == 0) {
        return y;
    } else {
        return gcd(y, x % y);
    }
}
