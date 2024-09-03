//
//  work08.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/1/24.
//

#include <stdio.h>

int main9(void) {
    // break / continue
    
    for (int i = 1; i <= 30; i++) {
        if (i >= 5) {
            printf("나머지는 집으로 가세요.\n");
            break; // for 문 탈출
        }
        printf("%d 번 학생은 방과후에 남으세요.\n", i);
    }
    return 0;
}
