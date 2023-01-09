//
// Created by Anastasia Chichagova on 06.01.2023.
//
/*
 * Переписать элементы одномерного массива в другой массив такого же размера следующим образом:
 * сначала должны идти все отрицательные элементы исходного массива,
 * а затем все остальные. Использовать только один проход по исходному массиву.
 * Сохранить тот порядок среди положительных и среди отрицательных элементов в результирующем массиве,
 * который был в исходном массиве. Применить данный алгоритм к трем заданным массивам.
 */
#include "Headers/ex5.h"
void ex5 () {
    srand (time(NULL));
    int length = random_int(1, 100);

    int *arr = new int [length];

    for (int i = 0; i < length; i++){
        *(arr + i) = random_int(-20, 20);
    }

    std::cout << "Исходный массив" << std::endl;

    for (int i = 0; i < length; i++){
        std::cout << *(arr + i) << " ";
    }
    std::cout << "\n" << std::endl;

    int *arr1 = new int [length];

    int i, j, k;

    for (i = 0, j = 0, k = length - 1; i < length; ++i ) {
        if ( arr[i] < 0 ) //если встречаем отрицательный arr[i], записываем в начало
            arr1[j++] = arr[i];
        else    //если встречаем положительный arr[i], записываем в конец
            arr1[k--] = arr[i];
    }
    //k+1 - номер первого положительного элемента

    for ( i = k + 1, j = length - 1; i < j; ++i, --j ){ //"переворачиваем" вторую часть массива с положительными числами
        std::swap(arr1[i], arr1[j]);
    }

    std::cout << "Новый массив" << std::endl;

    for (int i = 0; i < length; i++){
        std::cout << *(arr1 + i) << " ";
    }
    std::cout << "\n" << std::endl;


    delete [] arr;
    delete [] arr1;

}