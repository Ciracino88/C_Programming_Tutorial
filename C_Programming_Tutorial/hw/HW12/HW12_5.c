//
//  HW12_5.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/25/24.
// main_hw38
// hw_12_5
// 202120819 경제학과 이승호

#include <stdio.h>
#define SIZE 10
void print_array(const int* arr, int size);
int find_array(const int* arr, int size, int key, int* found);

int main_hw38(void) {
    int arr[SIZE] = {11, 22, 33, 88, 22, 22, 33, 44, 55, 77};
    int key;
    int found[SIZE] = {0};
    
    print_array(arr, SIZE);
    
    printf("찾을 값? ");
    scanf("%d", &key);
    
    int cnt = find_array(arr, SIZE, key, found);
    printf("찾은 항목은 모두 %d 개입니다.\n", cnt);
    
    // 찾은 값이 있을 때만 리턴
    if (cnt != 0) {
        printf("찾은 항목의 인덱스: ");
        for (int i = 0; i < SIZE; i++) {
            if (found[i] != 0) {
                printf("%d ", found[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

void print_array(const int* arr, int size) {
    int i;
    for (i = 0; i < size; i++)
    printf("%d ", *arr++);
    printf("\n");
}

int find_array(const int* arr, int size, int key, int* found) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (key == arr[i]) {
            count += 1;
            found[i] = i;
        }
    }
    return count;
}
