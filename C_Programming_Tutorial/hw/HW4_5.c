//
//  HW4_5.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/26/24.
// main_hw12
// 경제학과 202120819 이승호
#include <stdio.h>

int main_hw12(void) {
    // rgb 는 24비트. 각각의 값이 8비트. 8비트는 2의 8승이므로 0부터 255 사이의 값을 가짐
    int red;
    int green;
    int blue;
    
    printf("red? ");
    scanf("%d", &red);
    printf("green? ");
    scanf("%d", &green);
    printf("blue? ");
    scanf("%d", &blue);
    
    printf("%X%X%X\n", red, green, blue);
    return 0;
}
