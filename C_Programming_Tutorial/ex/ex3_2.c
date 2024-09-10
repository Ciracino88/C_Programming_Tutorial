//
//  ex3_2.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 9/10/24.
//

#include <stdio.h>

int main_ex8(void) {
    char gender;
    int age;
    double height;
    
    printf("Enter your gender: ");
    scanf("%c", &gender);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your height: ");
    scanf("%lf", &height);
    
    printf("성별\t\t나이\t\t키\n");
    printf("%c\t\t%d\t\t%f\n", gender, age, height);
    
    return 0;
}
