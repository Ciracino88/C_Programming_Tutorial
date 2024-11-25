//
//  HW11_4.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/17/24.
// main_hw33
// hw_11_4
// 202120819 경제학과 이승호

#include <stdio.h>
#define MAX_SEATS 10

void print_seat(int seats[], int size);

// 좌석은 1번부터 순서대로 예매된다.
int main_hw33(void) {
    int seats[MAX_SEATS] = { 0 };
    int occupied = 0; // 예약을 시작하는 위치 (index) : 처음에는 당연히 0번째 자리를 예약하니까 0
    int request = 0; // 사용자가 예약하고 싶은 좌석수
    int empty;
    int i;
    
    while (1) {
        print_seat(seats, MAX_SEATS);
        printf("예매할 좌석수? ");
        scanf("%d", &request);
        
        if (request + occupied >= MAX_SEATS) {
            printf("남은 좌석 수가 %d 이므로 %d 좌석을 예매할 수 없습니다.\n", MAX_SEATS - occupied, request);
            break;
        } else {
            // 예약 실행
            for (i = 0; i < request; i++) {
                seats[i + occupied] = 1;
                printf("%d ", occupied + i + 1);
            }
            printf("번 좌석을 예매했습니다.\n");
            occupied += i;
        }
    }
    return 0;
}

void print_seat(int seats[], int size) {
    printf("--------------------------------------\n");
    printf("현재 좌석: [ ");
    for (int i = 0; i < size; i++) {
        if (seats[i] == 0) {
            printf("O ");
        } else {
            printf("X ");
        }
    }
    printf("]\n");
    printf("--------------------------------------\n\n");
}
