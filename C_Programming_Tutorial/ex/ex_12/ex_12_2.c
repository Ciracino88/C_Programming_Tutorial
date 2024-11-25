//
//  ex_12_2.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/19/24.
// main_ex70
// 202120819 경제학과 이승호

#include <stdio.h>

// 포인터
// 주소 값을 변수로 사용한다.

// 타입 *포인터명 형식으로 포인터 변수를 선언한다.
// ex) int *p;

int main_ex70(void) {
    int num = 10;
    int *pt = &num;
    
    // *포인터명 : 해당 변수의 주소를 타고가서 값을 가져와
    printf("%d\n", num);
    printf("%d\n", *pt);
    
    int arr[3] = { 1, 2, 3 };
    int * arrpt = arr;
    
    printf("%d\n", arr[0]);
    printf("%d\n", *arrpt);
    
    arrpt = arr; // 0번째 원소의 주소를 대입
    
    // 어떠한 행위를 3번 할거
    for (int i = 0; i < 3; i++) {
        *arrpt = (i + 1) * 100; // 0번째 원소값을 재설정
        printf("%d ", *arrpt++); // 값을 출력하고, 원소의 주소값을
    }
    
    return 0;
}
