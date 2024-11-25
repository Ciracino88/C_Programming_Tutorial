//
//  ex_12_1.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/19/24.
// main_ex69
// 202120819 경제학과 이승호

#include <stdio.h>

// c언어에서는 스왑이 불가하다. 그래서 임시 버퍼르 만들어서 값을 서로 바꾼다.

// 선택 정렬
// 52 31 28 17 46 (첫번째 원소부터 탐색을 시작)
// 17 31 28 52 46 (가장 작은 값 17과 스왑)

// 17 28 31 52 46 (두 번쨰 원소부터 탐색을 시작 : 가장 작은 값 28과 스왑)

// 17 28 31 46 52 (세 번쨰 원소부터 탐색 : 문제 없음. 네 번째 원소부터 탐색 : 가장 작은 값 46과 스왑)

int main_ex69(void) {
    int data[5] = { 52, 31, 28, 17, 46 };

    int min;

    for (int i = 0; i < 5-1; i++) {
        min = data[i];
        int new_min_index = i;
        // 지금부터 제일 작은 값을 찾는다.
        for (int j = i+1; j < 5; j++) {
            if (min > data[j]) {
                min = data[j];
                new_min_index = j;
            }
        }
        // 제일 작은 값을 반영할 거임.
        data[new_min_index] = data[i]; // 찾은 위치에 비교 대상을 넣어줌.
        data[i] = min; // 비교 대상에는 찾은 값을 넣어줌.
        
        for (int k = 0; k < 5; k++) {
            printf("%d ", data[k]);
        }
        printf("\n");
    }
    
    return 0;
}


