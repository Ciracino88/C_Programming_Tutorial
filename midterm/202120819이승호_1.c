//
//  202120819이승호_1.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/22/24.
//

#include <stdio.h>

int main_1(void) {
    int a;
    char class;
    
    printf("학번 입력: ");
    scanf("%d", &a);
    
    // 특이점 처리
    if (a%10 == 0) {
        printf("컴프D반\n");
    }
    
    else {
        switch (a%10%3) {
            case 1:
                class = 'A';
                break;
            case 2:
                class = 'B';
                break;
            case 0:
                class = 'C';
                break;
                
            default:
                class = 'N';
                break;
        }
        
        printf("컴프%c반\n", class);
    }
    return 0;
}
