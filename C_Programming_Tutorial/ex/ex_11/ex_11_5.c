//
//  ex_11_5.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/5/24.
// main_ex63
// 202120819 경제학과 이승호


#include <stdio.h>
#define b 200 // 매크로 상수를 이용해 배열의 크기를 선언할 수 있다. (이렇게 쓰는 이유가 length 메서드가 없어서인듯. c에서는 이게 length 대체품인듯)
// 배열

// 배열 선언 : 타입 배열명[배열크기]
int scores[10];

int main_ex63(void) {
    
    for (int i = 0; i <= 9; i++) {
        scores[i] = i+1;
    }
    
    printf("%d\n", scores[0]);
    printf("%d\n", scores[2]);
    printf("%d\n", scores[4]);
    
    const int a = 100;
    
//    int arr1[a]; // 이런 식으로 const 로 지정한 값을 배열의 크기롤 쓸 수 없음.
    int arr2[b]; // 매크로 상수는 배열 크기롤 쓸 수 있음
    printf("%d\n", sizeof(arr2)); // sizeof 메서드를 이용해 배열의 크기를 바이트 단위로 확인할 수 있다.
    printf("%d\n", sizeof(arr2[0])); // 원소 하나의 크기
    printf("%d\n", sizeof(arr2) / sizeof(arr2[0])); // 배열의 개수 (배열이 꽉 차있는 상태가 아닐 때 사용)
    
    printf("%d %d %d %d\n", arr2[0], arr2[1], arr2[2], arr2[3]);
    
    // char 배열은 마지막에 null 값이 들어간다.
    char name[32] = "HONG";
    printf("%c %c %c %c %c\n", name[0], name[1], name[2], name[3], name[4]);
    
    
    // 그냥 배열만 선언하면?
    // 디폴트로 0이 들어감
    // 컴파일러마다 디폴트 값이 다르게 될 수 있음.
    // 비주얼 스튜디오 기준으로는 쓰레기 값이 들어감.
    int gar[5];
    for (int i = 0; i < sizeof(gar) / sizeof(gar[0]); i++) {
        printf("%d ", gar[i]);
    }
    printf("\n");
    
    // double 타입 배열의 디폴트는?
    // double 타입으로 0 (소숫점 6자리)
    double gar2[20];
    printf("%f %f %f %f\n", gar2[0], gar2[1], gar2[2], gar2[3]);
    
    // 그럼 char 는?
    // 쓰레기값 들어감
    double gar3[10];
    printf("%c %c\n", gar3[0], gar3[1]);
    return 0;
}
