//
//  HW12_4.c
//  C_Programming_Tutorial
//
//  Created by 이승호 on 11/25/24.
// main_hw37
// hw_12_4
// 202120819 경제학과 이승호


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

//void print_array(int* arr, int size);
//void creat_array(int arr[], int size);
//void sort_array(int* arr, int size);
//
//int main_hw37(void) {
//    int data[SIZE];
//    creat_array(data, SIZE);
//     
//    printf("정렬 전: ");
//    print_array(data, SIZE);
//    
//    sort_array(data, SIZE);
//    
//    printf("정렬 후: ");
//    print_array(data, SIZE);
//    
//    return 0;
//}
//
//void print_array(int* arr, int size) {
//    int i;
//    for (i = 0; i < size; i++)
//    printf("%d ", *arr++);
//    printf("\n");
//}
//
//void creat_array(int arr[], int size) {
//    srand(time(NULL));
//    
//    for (int i = 0; i < size; i++) {
//        arr[i] = rand()%99+1;
//    }
//}
//
//void sort_array(int* arr, int size) {
//    int temp;
//    for (int i = 0; i < size - 1; i++) {
//        int min_index = i;
//        temp = arr[i];
//        for (int j = i+1; j < size; j++) {
//            if (temp > arr[j]) {
//                temp = arr[j];
//                min_index = j;
//            }
//        }
//        arr[min_index] = arr[i];
//        arr[i] = temp;
//    }
//}
