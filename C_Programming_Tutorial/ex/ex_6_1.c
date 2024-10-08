//
//  ex_6_1.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/8/24.
//

#include <stdio.h>

int main_ex29(void) {
    int month;
    
    printf("몇 월인가요? : ");
    scanf("%d", &month);
    
    switch (month/3) {
        case 0:
            printf("겨울이군요\n");
            break;
        case 1:
            printf("봄이군요\n");
            break;
        case 2:
            printf("여름이군요\n");
            break;
        case 3:
            printf("가을이군요\n");
            break;
        case 4:
            printf("겨울이군요\n");
            break;
            
        default:
            break;
    }
    return 0;
}
