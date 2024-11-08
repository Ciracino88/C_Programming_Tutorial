//
//  ex_9_6.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/29/24.
// main_ex54
// lab9_5
// 202120819 경제학과 이승호

#include <stdio.h>

int is_leap_year(int year);

int main_ex54(void) {
    
    for (int i = 2000; i < 2100; i++) {
        if (is_leap_year(i) == 1) {
            printf("%d ", i);
        } else {
            continue;
        }
    }
    return 0;
}

int is_leap_year(int year) {
    if (year % 400 == 0) {
        return 1;
    } else {
        if (year % 4 == 0 && year % 100 != 0) {
            return 1;
        }
        
        else {
            return 0;
        }
    }
}
