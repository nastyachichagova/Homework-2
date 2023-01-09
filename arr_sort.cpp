//
// Created by Anastasia Chichagova on 09.01.2023.
//

#include "Headers/arr_sort.h"

void arr_sort(int *arr, int a, int b, bool switcher){
    int l = b - a + 1;
    int *arr1 = new int [l];

    for (int i = 0; i < l; i++){
        arr1[i] = arr[a + i];
    }

    for (int i = 0; i < l - 1; i++) {
        for (int j = 0; j < l - i - 1; j++) {
            if (arr1[j] > arr1[j + 1] && switcher || arr1[j] < arr1[j + 1] && !switcher) {
                std::swap (arr1[j], arr1[j + 1]);
            }
        }
    }

    for (int i = 0; i < l; i++){
        arr[a + i] = arr1[i];
    }

    delete[] arr1;
}

