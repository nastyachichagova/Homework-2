//
// Created by Anastasia Chichagova on 13.12.2022.
//

/*
 * Ввести массив, состоящий из 12 элементов действительного типа. Распо-
ложить элементы в порядке убывания. Определить количество проис-
шедших при этом перестановок.
 */

#include "Headers/ex4.h"

void sort_array (double arr[], int size_arr, int &k){
    k = 0;
    while (size_arr--){
        bool swapped = false;

        for(int i = 0; i < size_arr; i++){
            if (arr[i] < arr[i+1]){
                std::swap (arr[i], arr[i+1]);
                k++;
                swapped = true;
            }
        }

        if (!swapped){
            break;
        }
    }
}

void ex4 (){
    int k = 0;

    double *arr = new double[12];

    for (int i = 0; i < 12; ++i){
        *(arr + i) = random_double(0, 10);
    }

    sort_array(arr, 12, k);

    std::cout << "Сортированный массив" << std::endl;

    for (int i = 0; i < 12; ++i){
        std::cout << *(arr + i) << " ";
    }
    std::cout << "\n" << std::endl;

    std::cout << "Количество перестановок\t" << k << std::endl;

    delete [] arr;
}

