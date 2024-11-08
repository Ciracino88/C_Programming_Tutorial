//
//  ex_5_1.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/1/24.
//

#include <stdio.h>

int main_ex19(void) {
    int score;
    
    printf("점수를 입력해주세요.\n");
    scanf("%d", &score);
    
    if (score < 70) {
        printf("재시\n");
        printf("재시는 90점 이상이어야 통과임\n");
    }
    
    else {
        printf("통과\n");
    }
    return 0;
}
