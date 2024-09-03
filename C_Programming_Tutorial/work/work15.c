//
//  work15.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/1/24.
//

#include <stdio.h>

// 포인터

int main16(void) {
    // 암호
    int apple = 1;
    int lemon = 2;
    int sugar = 3;
    
    printf("apple : %d, code : %d\n", &apple, apple); // apple 의 주소, apple 의 암호
    printf("lemon : %d, code : %d\n", &lemon, lemon);
    printf("sugar : %d, code : %d\n", &sugar, sugar);
    
    // 포인터 변수
    int * man;
    
    // 주소 확인 후 암호를 확인
    man = &apple;
    printf("방문한 주소 : %d, 암호 : %d\n", man, *man);
    man = &lemon;
    printf("방문한 주소 : %d, 암호 : %d\n", man, *man);
    man = &sugar;
    printf("방문한 주소 : %d, 암호 : %d\n", man, *man);
    
    // 주소 확인 후 암호를 변경
    man = &apple;
    *man = 1234;
    printf("방문한 주소 : %d, 암호 : %d\n", man, *man);
    
    // spy : 또 다른 포인터
    int * spy = man; // spy 가 man 을 가르키도록 연결 (spy -> man -> &target)
    spy = &apple;
    *spy = 1004;
    printf("spy 가 방문한 주소 : %d, 암호 : %d\n", spy, *spy);
    
    // 포인터의 주소
    printf("man 의 주소 : %d\n", &man);
    
    return 0;
}
