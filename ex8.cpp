//
// Created by Anastasia Chichagova on 06.01.2023.
//
/*
 * Дана матрица. Известно, что в каждой строке этой матрицы присутствуют два и только два
 * нулевых элемента. Для каждой строки матрицы подсчитать сумму элементов, заключенных между
 * этими двумя нулями. Применить функцию, рассматривающую строки матрицы как одномерные массивы.
 */

#include "Headers/ex8.h"
void ex8(){
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

    int p, q, s = 0;
    int *sum = new int [m];

    for (int i = 0; i < m; i++){
        p = random_int(0, n - 1);
        q = random_int(p + 1, n);
        arr[i][q] = arr[i][p] = 0;
        for(int j = p; j < q; j++){
            s +=  arr[i][j];
        }
        sum[i] = s;
        s = 0;
    }

    for (int i = 0; i < m; i++){
        for (int j=0; j < n; j++)
            std::cout << arr[i][j] << " ";
        std::cout << "\tСумма = " << sum[i];
        std::cout << "\n";
    }



    for (int i = 0; i < m; ++i){
        delete[] arr[i];
    }
    delete[] arr;
    delete[] sum;
}