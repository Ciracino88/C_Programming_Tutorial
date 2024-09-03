//
//  ex2_5.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/3/24.
//


// 경제학과 202120819 이승호
#include <stdio.h>

int main_ex5(void) {
    // 변수 선언 : 타입, 변수명, 값
    
    int a = 10;
    double b = 3.14;
    char c = 'A';
    
    printf("a : %d, b : %.2f, c : %c\n", a, b, c);
    printf("%d + %.2f = %.2f\n", a, b, a+b);
    
    // 올해 년도, 태어난 년도, 계산을 통해 나이 출력
    int end_year = 2024;
    int start_year = 2002;
    
    // 한국은 1살부터 시작하니까 1 더하기
    printf("올해 년도 : %d\n태어난 년도 : %d\n나이 : %d\n", end_year, start_year, end_year - start_year + 1);
    
    // 입력을 받아 나이를 구해보기
    int current_year;
    int birth_year;
    
    // 포인터 배우고 다시 보니까 : & 기호의 의미가 해당 공간을 선택하는 것이네...
    // * : 포인터 변수 지정, & : 타겟의 저장공간 선택 (주소)
    // & : 저장공간의 주소를 입력해주세요! (scanf : 입력받은 값을 어디에 저장할까?, pointer : 어떤 저장공간을 불러올까?)
    scanf("%d", &current_year);
    scanf("%d", &birth_year);
    
    printf("나이 : %d\n", current_year - birth_year + 1);
    
    return 0;
}

// double vs float
// double : 8바이트를 먹는다. 계산 속도가 float 에 비해 빠름. 매우 큰 수를 처리하는데 유용
// float : 4바이트를 먹는다. 평범한 소수를 계산하는데 유리하다.
