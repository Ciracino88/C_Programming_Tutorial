//
//  work03.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/1/24.
//

#include <stdio.h>

// scanf : 키보드 입력을 받아서 저장

int main4(void) {
    int input;
    printf("값을 입력하세요: ");
    scanf("%d", &input);
    printf("입력삾 : %d\n", input);
    
    int a, b, c;
    printf("3개의 정수를 입력하세요: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    
    char text = 'A';
    printf("%c\n", text);
    
    // 문자열을 만들기 위해서는 미리 문자열 길이를 지정해야함.
    // scanf_s 는 microsoft 컴파일러에서만 작동하는 함수이다. 따라서 xcode 에서는 scanf 만을 사용해야 한다.
    
    char str[10];
    printf("문자열을 입력하세요: ");
    scanf("%s\n", str); // sizeof 를 이용해서 해당 크기 이내의 값만을 받을 수 있도록 맥시멈을 지정
    printf("%s\n", str);
    
    return 0;
}
