//
//  ex3_1.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/10/24.
//

#include <stdio.h>

// 정수형 타입 변수에 소수를 넣으면 소숫점 자리가 짤려서 들어감.
// 키워드 : C언어에서 미리 지정해둔 함수나 타입 이름들 (ex : double, scanf)
// 식별자 : 프로그래머가 정해놓고 사용하는 용어 (ex : 변수, 키워드)
// 식별자는 변수로 사용할 수 없다.
// initalize : 초기화 작업. 변수의 최초값을 지정해주는 행위.

// double 타입은 형식 지정자로 %lf 를 사용. 출력은 %f 로 해도 무관

// HW2_3
int main_ex7(void) {
    int first;
    int second;
    
    // 신기한 사실 : scanf 로 값을 입력받으면 자동으로 줄바꿈을 함
    printf("Enter the first number: ");
    scanf("%d", &first);
    printf("Enter the second number: ");
    scanf("%d", &second);
    
    printf("%d + %d = %d\n", first, second, first + second);
    printf("%d - %d = %d\n", first, second, first - second);
    printf("%d * %d = %d\n", first, second, first * second);
    printf("%d / %d = %d\n", first, second, first / second);
    
    return 0;
}
