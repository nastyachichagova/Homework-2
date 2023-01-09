//
// Created by Anastasia Chichagova on 06.01.2023.
//

#include "Headers/ex7.h"

/*Определить количество локальных минимумов в заданном числовом
массиве. (Локальный минимум в числовом массиве – это последователь-
ность трех рядом стоящих чисел, в которой среднее число меньше стоя-
щих слева и справа от него).*/

void ex7(){
    int k = 0;

    srand (time(NULL));
    int length = random_int(1, 10);

    int *arr = new int [length];

    for (int i = 0; i < length; i++){
        *(arr + i) = random_int(-20, 20);
    }

    std::cout << "Mассив" << std::endl;

    for (int i = 0; i < length; i++){
        std::cout << *(arr + i) << " ";
    }

    for (int i = 1; i < length-1; ++i){
        if(arr[i] < arr[i-1] && arr[i] < arr[i+1]){
            k++;
        }
    }

    std::cout << "\nМассив содержит " << k << " локальных минимумов" << std::endl;

    delete[] arr;
}