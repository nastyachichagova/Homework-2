//
// Created by Anastasia Chichagova on 08.01.2023.
//
//Сдвинуть циклически столбцы матрицы на один столбец вправо.

#include "Headers/ex11.h"

void ex11(){
    srand (time(NULL));

    int m = random_int(1, 10); //m строк
    int n = random_int(1, 10); //n столбцов

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


    int *tmp = new int[m];

    for (int i = 0; i < m; i++)
        tmp[i] = arr[i][n - 1];

    for (int i = 0; i < m; i++){
        for(int j = n - 1; j > 0; j--)
            arr[i][j] = arr[i][j - 1];
    }

    for (int i = 0; i < m; i++)
        arr[i][0] = tmp[i];

    delete[] tmp;

    std::cout << "Результат" << std::endl;
    for (int i = 0; i < m; i++){
        for (int j=0; j < n; j++)
            std::cout << arr[i][j] << " ";
        std::cout << "\n";
    }


    for (int i = 0; i < m; ++i){
        delete[] arr[i];
    }
    delete[] arr;

}