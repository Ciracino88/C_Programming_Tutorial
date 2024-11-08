//
//  ex_6_3.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/8/24.
// main_ex31

#include <stdio.h>

int main_ex31(void) {
    int score;
    
    printf("점수 입력 : ");
    scanf("%d", &score);
    
    switch ((100 - score)/10) {
        case 1 :
            printf("A\n");
            break;
        case 2 :
            printf("B\n");
            break;
        case 3 :
            printf("C\n");
            break;
        case 0 :
            printf("A\n");
            break;
            
        default:
            printf("F\n");
            break;
    }
    return 0;
}
