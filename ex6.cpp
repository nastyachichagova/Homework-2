//
// Created by Anastasia Chichagova on 16.12.2022.
//
/*Ввести массив, состоящий из 14 элементов действительного типа. Поме-
нять местами первую половину со второй. Определить количество
произведенных при этом перестановок.*/

#include "Headers/ex6.h"
void ex6(){
    srand (time(NULL));

    double *arr = new double [14];
    int k = 0;

    for (int i = 0; i < 14; i++){
        *(arr + i) = random_double(-10, 10);
    }

    std::cout << "Исходный массив" << std::endl;

    for (int i = 0; i < 14; i++){
        std::cout << *(arr + i) << " ";
    }
    std::cout << "\n" << std::endl;

    for (int i = 0; i < 7; ++i){
        std::swap(arr[i], arr[7+i]);
        k++;
    }

    std::cout << "Новый массив" << std::endl;

    for (int i = 0; i < 14; ++i){
        std::cout << *(arr + i) << " ";
    }

    std::cout << "\nКоличество перестановок\t" << k << std::endl;

    delete[] arr;
}