//
//  work12.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/1/24.
//

#include <stdio.h>

int add(int num1, int num2) {
    return num1 + num2;
}

int sub(int num1, int num2) {
    return num1 - num2;
}

int multi(int num1, int num2) {
    return num1 * num2;
}

int divi(int num1, int num2) {
    return num1 / num2;
}

int main13(void) {
    printf("add: %d\n", add(4, 3));
    printf("sub: %d\n", sub(4, 3));
    printf("multi: %d\n", multi(4, 3));
    printf("divi: %d\n", divi(4, 3));
    
    return 0;
}
