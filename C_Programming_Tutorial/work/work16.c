//
//  work16.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/1/24.
//

#include <stdio.h>

int main17() {
    // 배열과 포인터의 관계 : 배열의 값이 곧 포인터다.
    int arr[3] = { 5, 10, 15 };
    int * ptr = arr;

    for (int i = 0; i < 3; i++) {
        printf("arr[%d] 의 값 : %d\n", i, arr[i]);
    }
    
    for (int i = 0; i < 3; i++) {
        printf("포인터 ptr[%d] 의 값 : %d\n", i, ptr[i]);
    }
    
    ptr[0] = 100;
    ptr[1] = 200;
    ptr[2] = 300;
    
    for (int i = 0; i < 3; i++) {
        printf("포인터 ptr[%d] 의 값 : %d\n", i, ptr[i]);
    }
    
    // 포인터를 계속 연결한다는 것 : 배열을 계속해서 연결한다는 것.
    
    
    return 0;
}

