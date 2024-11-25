//
//  HW12_2.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/25/24.
// main_hw35
// hw_12_2
// 202120819 경제학과 이승호

#include <stdio.h>

void print_array(int* p, int size);
void get_min_max(const int* arr, int size, int* min, int* max);

//int main_hw35(void) {
//    int arr[10] = {55, 12, 45, 98, 23, 35, 28, 67, 52, 40};
//    printf("배열: ");
//    print_array(arr, 10);
//    
//    int min, max;
//    
//    get_min_max(arr, 10, &min, &max);
//    printf("최대값 : %d\n", max);
//    printf("최소값 : %d\n", min);
//    
//    return 0;
//}
//
//void print_array(int *p, int size) {
//    for (int i = 0; i < size; i++) {
//        printf("%d ", p[i]);
//        // printf("%d ", *(p + i);
//        // printf("%d ", *p++);
//    }
//    printf("\n");
//}
//
//void get_min_max(const int* arr, int size, int* min, int* max) {
//    *min = arr[0];
//    *max = arr[0];
//    
//    for (int i = 0; i < size; i++) {
//        if (arr[i] < *min) {
//            *min = arr[i];
//        }
//        
//        if (arr[i] > *max) {
//            *max = arr[i];
//        }
//    }
//}
