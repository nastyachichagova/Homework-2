//
// Created by Anastasia Chichagova on 08.01.2023.
//
/*В матрице найти строки с максимальной и минимальной суммами элементов. */

#include "Headers/ex12.h"

int Sum (int *arr, int size){
    int sum = 0;

    for (int i = 0; i < size; i++){
        sum += *(arr + i);
    }

    return sum;
}

void ex12(){
    srand (time(NULL));

    int m = random_int(3, 6); //m строк
    int n = random_int(3, 6); //n столбцов

    int **arr = new int*[m];

    for (int i = 0; i < m; ++i){
        arr[i] = new int[n];
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
            arr[i][j] = random_int(1, 10);
    }

    std::cout << "Исходная матрица" << std::endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
            std::cout << arr[i][j] << " ";
        std::cout << "\n";
    }

    int sum_max = 0, sum_min;
    int idx_max, idx_min;

    for (int i = 0; i < m; i++) {
        if ( Sum(arr[i], n) > sum_max ){
            sum_max = Sum(arr[i], n);
            idx_max = i;
        }


    }

    sum_min = sum_max;

    for (int i = 0; i < m; i++) {
        if ( Sum(arr[i], n) < sum_min ){
            sum_min = Sum(arr[i], n);
            idx_min = i;
        }
    }

    std::cout << "Строка с максимальной суммой\t";
    for (int i = 0; i < n; i++)
        std::cout << arr[idx_max][i] << " ";
    std::cout << "\nМаксимальная сумма\t" << sum_max;

    std::cout << "\nСтрока с минимальной суммой\t";
    for (int i = 0; i < n; i++)
        std::cout << arr[idx_min][i] << " ";
    std::cout << "\nМинимальная сумма\t" << sum_min;

    for (int i = 0; i < m; ++i){
        delete[] arr[i];
    }
    delete[] arr;
}