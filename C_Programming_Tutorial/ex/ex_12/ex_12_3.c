//
//  ex_12_3.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/25/24.
// main_hw36
// lab_4
// 202120819 경제학과 이승호

#include <stdio.h>
#define SIZE 5

//void print_array(int arr[], int size);
//
//int main_hw36(void) {
//    int data[SIZE] = { 52, 31, 28, 17, 46 };
//    int i, j, temp;
//    int index_min; // 정렬되지 않은 원소 중 가장 작은 원소의 인덱스
//
//    for (int i = 0; i < SIZE-1; i++) {
//        index_min = data[i];
//        int temp = i;
//        // 지금부터 제일 작은 값을 찾는다.
//        for (int j = i+1; j < SIZE; j++) {
//            if (index_min > data[j]) {
//                index_min = data[j];
//                temp = j;
//            }
//        }
//        // 제일 작은 값을 반영할 거임.
//        data[temp] = data[i]; // 찾은 위치에 비교 대상을 넣어줌.
//        data[i] = index_min; // 비교 대상에는 찾은 값을 넣어줌.
//        printf("i = %d 일때 정렬 결과 : ", i);
//        print_array(data, SIZE);
//    }
//    
//    return 0;
//}
//
//void print_array(int arr[], int size) {
//    int i;
//    for (i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
