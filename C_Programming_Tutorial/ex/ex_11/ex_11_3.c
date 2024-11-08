//
//  ex_11_3.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/5/24.
// main_ex61
// 202120819 경제학과 이승호

#include <stdio.h>

void to2(int from10) {
    
    while (from10 != 0) {
        printf("%d", from10%2);
        from10 = from10 / 2;
    }
}

void recur_to2(int from10) {
    // 몫이 1 일때 끝내는게 더 좋다.
    if (from10 == 1) {
        printf("%d", from10%2);
    } else {
        recur_to2(from10 / 2);
        printf("%d", from10%2);
    }
}

int main_ex61(void) {
    to2(13); // 이진수의 역순으로 출력된다..
    printf("\n--------\n");
    recur_to2(13);
    printf("\n"); // 재귀함수를 이용하면 출력의 순서를 역으로 호출하는게 간편하다.
    return 0;
}
