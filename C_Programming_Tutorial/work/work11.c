//
//  work11.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/1/24.
//

#include <stdio.h>

// 함수
// 매개변수의 타입을 꼭 선언해줘야 한다.
// 그냥 c에서 선언하는 변수들은 모두 타입 선언을 해줘야 한다. 참으로 엄격한 녀석... 타입 추론이라는 기능이 없나보다...
// 반환값이 없는 함수는 void 로 선언한다.
// 반환값이 있는 함수는 반환값의 타입을 선언한다.

// 반환값이 없는 함수
void p(int num) {
    printf("num 은 %d 입니다.\n", num);
}


// 반환값이 있는 함수
int p2(int num) {
    return num + 1;
}

int main12(void) {
    int num1 = 2;
    p(num1);
    
    int num2 = 3;
    p(num2);
    
    printf("p2: %d\n", p2(num2));
    
    return 0;
}
