//
//  ex_4_1.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/24/24.
//

#include <stdio.h>
#define PI 3.14

int main_ex11(void) {
    // 오버플로우 : 저장 크기보다 더 큰 값을 추가하려 할 때 발생
    // 1바이트는 8비트
    // 역슬래시 자체가 이스케이프 자체의 의미가 있음. 그래서 \n, \t 이렇게 쓰는거.
    // 단정도는 4바이트 저장
    // 배정도는 8바이트 저장
    // 작은 따옴표로 쓰면 문자 상수 (char), 큰 따옴표로 쓰면 문자열 상수 (string)
    char ch = 'A';
    int n = 127;
    
    // 문자 데이터는 문자 타입으로 출력하면 알파벳으로 되고, 정수 타입으로 출력하면 아스키 코드로 출력됨.
    // 그래서 변수 상으로 이놈은 두 가지 타입을 가진다고 봐야함.
    printf("%d -> %c\n", ch, ch);
    printf("%c -> %c\n", ch+1, ch+32);
    
    printf("%d\n", n + 1);
    
    // 오버플로우 : char 타입은 최대 127 까지만 가질 수 있음. 그래서 그보다 큰 값을 저장하면 음수로 반환됨
    ch = 127;
    ch = ch + 100;
    printf("%d", ch);
    
    n = 230000000;
    n = n * 10;
    printf("%d\n", n);
    
    double radius;
    
    printf("반지름을 입력하세요: ");
    scanf("%lf", &radius);
    printf("%.2f\n", radius * radius * PI);
    
    // 시험 유형 : 코드 주고 오류 찾기
    return 0;
    
}
