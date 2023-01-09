//
// Created by Anastasia Chichagova on 08.01.2023.
//
/*
 * Ввести два массива действительных чисел. Определить максимальные
элементы в каждом массиве и поменять их местами.
 */
#include "Headers/ex10.h"

void arr_max(double *arr, int size, int &arr_max){
    arr_max = 0;
    for (int i = 0; i < size; i++){
        if (arr[i] > arr[arr_max]){
            arr_max = i;
        }
    }
}

void ex10(){
    srand (time(NULL));
    int l1 = random_int(3, 10);

    double *arr1 = new double [l1];

    for (int i = 0; i < l1; i++){
        *(arr1 + i) = random_double(0, 10);
    }


    int l2 = random_int(3, 10);

    double *arr2 = new double [l2];

    for (int i = 0; i < l2; i++){
        *(arr2 + i) = random_double(0, 10);
    }

    std::cout << "Mассив 1" << std::endl;

    for (int i = 0; i < l1; i++){
        std::cout << *(arr1 + i) << " ";
    }

    std::cout << "\nMассив 2" << std::endl;

    for (int i = 0; i < l2; i++){
        std::cout << *(arr2 + i) << " ";
    }

    int m1 = 0, m2 = 0;

    arr_max(arr1, l1, m1);
    arr_max(arr2, l2, m2);

/*
    std::cout << "\nm1\t" << m1 << std::endl;
    std::cout << "arr1[m1]\t" << arr1[m1] << std::endl;
    std::cout << "arr1 + m1\t" << arr1 + m1 << std::endl;

    std::cout << "m2\t" << m2 << std::endl;
    std::cout << "arr2[m2]\t" << arr2[m2] << std::endl;
    std::cout << "arr2 + m2\t" << arr2 + m2 << std::endl;
    std::cout << "*arr2 + m2\t" << *(arr2 + m2) << std::endl;
    */

    std::swap(*(arr1 + m1), *(arr2+ m2));

    std::cout << "Итог" << std::endl;

    std::cout << "Mассив 1" << std::endl;

    for (int i = 0; i < l1; i++){
        std::cout << *(arr1 + i) << " ";
    }

    std::cout << "\nMассив 2" << std::endl;

    for (int i = 0; i < l2; i++){
        std::cout << *(arr2 + i) << " ";
    }

    std::cout << "\n" << std::endl;


    delete[] arr1;
    delete[] arr2;

}