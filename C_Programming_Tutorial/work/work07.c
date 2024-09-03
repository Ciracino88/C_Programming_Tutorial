//
//  work07.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/1/24.
//

#include <stdio.h>

int main8(void) {
    // if else
    
    int age = 23;
    if (age >= 20) {
        printf("일반인입니다.\n");
    } else {
        printf("청소년입니다.\n");
    }
    
    // and
    
    if (age >= 8 && age <= 13) {
        printf("초등학생!\n");
    } else if (age >= 14 && age <= 16) {
        printf("중학생!\n");
    } else if (age >= 17 && age <= 19) {
        printf("고등학생!\n");
    }
    
    return 0;
}
