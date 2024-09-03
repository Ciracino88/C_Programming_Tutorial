//
//  work13.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/1/24.
//

#include <stdio.h>

int main14(void) {
    // 배열
    int subways[3]; //[0][1][2]
    subways[0] = 10;
    subways[1] = 20;
    subways[2] = 30;
    
    printf("subway1: %d, subway2: %d, subway3: %d\n", subways[0], subways[1], subways[2]);
    
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; // 직접 배열에 값 입력
    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
    
    // 배열의 크기를 선언할 때, 변수를 이용하여 크기를 지정할 수 없음. 상수로만 선언 가능
    // ex) int size = 10
    // int arr[size] (x)
    
    // 배열의 값을 지정해주지 않으면 디폴트로 0이 들어감.
    
    
    return 0;
}
