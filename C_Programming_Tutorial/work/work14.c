//
//  work14.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/1/24.
//

#include <stdio.h>

int main15(void) {
    // 문자 vs 문자열
    char c = 'A';
    printf("%c\n", c);
    
    // 문자열 끝에는 끝을 의미하는 null 값이 포함되어야 함.
    // 문자열 뒤에 공간이 남으면 자동으로 null 값을 부여함.
    // 결론은 여유 공간이 없으면 이상한 문자가 붙게됨.
    
    char str[] = "coding";
    printf("%s\n", str);
    printf("%d\n", sizeof(str)); // 문자열의 크기를 출력
    
    // 문자열의 문자를 각각 출력해보기
    for (int i = 0; i < sizeof(str); i++) {
        printf("%c\n", str[i]);
    }
    
    char kor[] = "나는야완벽한런처"; // 2 3 2 4 3 3 3 2
    printf("%s\n", kor);
    printf("%d\n", sizeof(kor));
    
    // 영어 1글자를 표기하기 위해서는 : 1byte
    // 한글 1글자를 표현하기 위해서는 : 2byte
    // char 크기 : 1byte 단위
    
    
    return 0;
}
