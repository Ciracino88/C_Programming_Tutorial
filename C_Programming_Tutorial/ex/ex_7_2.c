//
//  ex_7_2.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 10/15/24.
// main_ex40
//
// 202120819 경제학과 이승호

#include <stdio.h>
#include <math.h>

struct stack {
    float price;
    float div; // 월당 배당
    int n; // 보유 주식 개수
};

float sum_seed(struct stack s1, struct stack s2, struct stack s3) {
    return s1.price * s1.n + s2.price * s2.n + s3.price * s3.n;
}

void print_info (struct stack s1, struct stack s2, struct stack s3, float sum) {
    float d = sum_seed(s1, s2, s3);
    printf("현재 schd %d 주를 보유 중입니다.\n", s2.n);
    printf("보유 현금은 %.2f 달러입니다.\n", sum);
    printf("총 자산은 %.2f 달러입니다.\n", d);
    printf("한화 계산 시, %.2f 원 입니다.\n", (d + sum) * 1350);
    printf("한화 계산 시, %.2f 만원 입니다.\n", (d + sum) * 1350 / 10000);
}

// 코카콜라 8% 나머지 46%씩 보유
int main_ex40(void) {
    // 코카콜라
    struct stack s1 = {70, 0.49/3, 24};
    // Schd
    struct stack s2 = {28, 0.6/3, 3*46};
    // qyld
    struct stack s3 = {18, 0.17, 3*46};
    
    int month = 12 * 5;
    float additional_seed = 100000 / 1350;
    float sum = 0;
    float d = sum_seed(s1, s2, s3);
    printf("투자 금액 : $%.2f\n", d);
    printf("투자 금액 : %.2f 원\n", d * 1350);
    printf("투자 금액 : %.2f 만원\n", d * 1350 / 10000);
    printf("\n");
    
    
    for (int i = 1; i <= month; i++) {
        // 배당금 얻고
        sum += s1.div*s1.n + s2.div*s2.n + s3.div*s3.n;
        
        // 추가 시드 넣고
        sum += additional_seed;
        
        // schd 를 살 수 있다면 사고
        if (sum >= s2.price) {
            int a = floor(sum/s2.price);
            sum -= a * s2.price;
            s2.n += a;
            
            printf("schd %d 주 구매\n", a);
        }
    }
    printf("\n");
    print_info(s1, s2, s3, sum);
    return 0;
}
