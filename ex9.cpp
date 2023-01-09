//
// Created by Anastasia Chichagova on 06.01.2023.
//
/*Ввести массив, состоящий из 15 элементов целого типа. Упорядочить
массив так, чтобы все отрицательные числа были расположены вначале
по возрастанию, а все положительные – в конце по убыванию.*/

#include "Headers/ex9.h"


void ex9(){
    srand (time(NULL));

    int *arr = new int [15];

    for (int i = 0; i < 15; i++){
        *(arr + i) = random_int(-10, 10);
    }

    std::cout << "Исходный массив" << std::endl;

    for (int i = 0; i < 15; i++){
        std::cout << *(arr + i) << " ";
    }

    int *arr1 = new int [15];

    int i, j, k;

    for (i = 0, j = 0, k = 14; i < 15; ++i ) {
        if ( arr[i] < 0 ) //если встречаем отрицательный arr[i], записываем в начало
            arr1[j++] = arr[i];
        else    //если встречаем положительный arr[i], записываем в конец
            arr1[k--] = arr[i];
    }
    //k+1 - индекс первого положительного элемента

    delete[] arr;


    std::cout << "\nНовый массив 1" << std::endl;

    for (i = 0; i < 15; i++){
        std::cout << *(arr1 + i) << " ";
    }

    arr_sort(arr1, 0, k, true);
    arr_sort(arr1, k+1, 14, false);


    std::cout << "\nНовый массив 2" << std::endl;

    for (i = 0; i < 15; i++){
        std::cout << *(arr1 + i) << " ";
    }

    std::cout << "\n";

    delete[] arr1;
};