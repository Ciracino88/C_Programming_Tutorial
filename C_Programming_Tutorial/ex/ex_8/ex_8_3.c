//
//  ex_8_3.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/29/24.
// main_ex47

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_ex47(void) {
    srand(time(NULL));
    
    int i = rand()%100+1;
    int count = 0;
    int j;
    
    while(1) {
        printf("say int: ");
        scanf("%d", &j);
        count += 1;
        if (j == i) {
            printf("clear!\n");
            break;
        }
        
        else if (j < i) {
            printf("up\n");
        }
        
        else {
            printf("down\n");
        }
    }
    printf("%d번 만에 맞췄어요!\n", count);
    
    return 0;
}
