//
//  ex_5_5.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/1/24.
// main_ex23

#include <stdio.h>

int main_ex23(void) {
    // c언어는 bool 타입이 없다.
    // 참은 1, 거짓은 0 을 반환한다.
    
    int score;
    int age;
    
    printf("점수 입력 : ");
    scanf("%d", &score);
    
    printf("나이 입력 : ");
    scanf("%d", &age);
    
    // (if, if) : 둘다 if 를 돈다.
    // (if, else if) : if 가 참이면 elseif 를 돌지 않는다. if 가 거짓이면 else if 를 돈다.
    if (score >= 80 && score <= 100) {
        printf("참 잘했어요\n");
    }
    
    if (age <= 6 || age >= 65) {
        printf("입장료 0원!\n");
    }
    
    // main 함수만 존나 특이한데, return 값을 설정하지 않아도 오류가 발생하지 않음.
    // 근데 다른 함수들은 void 로 선언해야만 리턴값을 설정 안 할 수 있음.
    return 0;
}
