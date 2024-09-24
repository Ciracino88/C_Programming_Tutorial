//
//  ex_4_6.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/24/24.
// 경제학과 202120819 이승호

#include <stdio.h>
int main_ex16(void) {
    int price;
    int down;
    
    printf("상품 가격: ");
    scanf("%d", &price);
    
    printf("할인율(%%): ");
    scanf("%d", &down);
    printf("-------영수증------\n");
    printf("상품 가격:\t%d\n", price);
    printf("할인된 가격:%8d\n", (int)(price * (0.01 * (float)down )));
    printf("-----------------\n");
    printf("할인된 가격:%8d\n", (int)(price * (1 - 0.01 * (float)down )));
    printf("-----------------\n");
    return 0;
}
