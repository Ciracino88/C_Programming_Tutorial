//
//  HW5_2.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/4/24.
//  main_hw14
//  경제학과 202120819 이승호

#include <stdio.h>

int main_hw14(void) {
    int rank;
    int the_number_of_people;
    
    printf("Enter your rank: ");
    scanf("%d", &rank);
    printf("Enter the total number of people: ");
    scanf("%d", &the_number_of_people);
    
    if (rank/the_number_of_people <= 0.1) {
        printf("Your grade is A!\n");
    }
    
    else if (rank/the_number_of_people <= 0.6) {
        printf("Your grade is B!\n");
    }
    
    else {
        printf(rank/the_number_of_people <= 0.9 ? "Your grade is C!\n" : "Your grade is F!\n");
    }
    return 0;
}
