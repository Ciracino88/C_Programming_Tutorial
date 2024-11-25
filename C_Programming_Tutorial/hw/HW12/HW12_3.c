//
//  HW12_3.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/25/24.
// main_hw36
// hw_12_3
// 202120819 경제학과 이승호

#include <stdio.h>

void get_rect_info(int w, int h, int *area, int *circumference);

int main_hw36(void) {
    int area, circumference, w, h;
    printf("가로길이? ");
    scanf("%d", &w);
    
    printf("세로길이? ");
    scanf("%d", &h);
    
    get_rect_info(w, h, &area, &circumference);
    printf("넓이 : %d, 둘레 : %d\n", area, circumference);
    
    return 0;
}

void get_rect_info(int w, int h, int *area, int *circumference) {
    *area = w * h;
    *circumference = 2 * (w + h);
}
