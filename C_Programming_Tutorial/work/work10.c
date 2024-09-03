//
//  work10.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/1/24.
//

#include <stdio.h>
#include <stdlib.h> // rand 함수를 사용하기 위함
#include <time.h> // time 함수를 사용하기 위함

int main11(void) {
    // rand 함수를 시드 생성 없이 실행하면 동일한 난수를 생성.
    // srand 를 이용하여 시드를 생성 후 rand 를 실행
    srand(time(NULL));
    int i = rand() % 3; // 0부터 2 사이의 값을 반환
    
    switch (i) {
        case 0:
            printf("가위\n");
            break;
        case 1:
            printf("바위\n");
            break;
        default:
            printf("보\n");
            break;
    }
    return 0;
}
