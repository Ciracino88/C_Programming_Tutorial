//
//  HW7_5.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/20/24.
// main_hw25
// hw_7_5
// 202120819 경제학과 이승호

#include <stdio.h>
int main(void) {
    // 97 ~ 122 이내에서만 허용
    char c;
    while (1) {
        printf("소문자를 입력: ");
        scanf("%c", &c);
        while(getchar() != '\n'); // 받는 즉시 바로 버퍼를 비워버림. (분기점마다 코드 남발 x)
        
        // 특이점 발생
        if (c == 'Q') {
            break;
        }
        
        else if (c >= 97 && c <= 97 + 25) {
            printf("변환된 대문자는 %c\n", c-32);
        }
        
        else {
            continue;
        }
    }
    return 0;
}
