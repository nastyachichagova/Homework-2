#include "Headers/main.h"

int main() {

    srand(time(NULL));

    std::cout << "№2_______________________________" <<std::endl;

    int n = 5;
    int *arr = new int[n];

    for (int i = 0; i < n; i++){
        *(arr + i) = rand() % 10;
    }

    std::cout << "Исходный массив\t" << std::endl;
    for (int i = 0; i < n; i++){
        std::cout << *(arr + i) << " ";
    }

    //создаем указатели на первый и последний элементы массива
    int *pa = arr;
    int *pla = arr+(n-1);
    //меняем местами
    Swap(pa, pla);

    std::cout << "\nРезультат\t" << std::endl;
    for (int i = 0; i < n; ++i){
        std::cout << *(arr + i) << " ";
    }

    delete []arr;

    std::cout << "\n№3_______________________________" <<std::endl;

    double **p = 0;
    p = new double*;
    *p = new double;
    *(*p) = 2;
    std::cout << **p << std::endl;
    delete *p;
    delete p;

    std::cout << "№4_______________________________" <<std::endl;
    ex4();

    std::cout << "№5_______________________________" <<std::endl;
    ex5();

    std::cout << "№6_______________________________" <<std::endl;
    ex6();

    std::cout << "№7_______________________________" <<std::endl;
    ex7();

    std::cout << "№8_______________________________" <<std::endl;
    ex8();

    std::cout << "№9_______________________________" <<std::endl;
    ex9();

    std::cout << "№10_______________________________" <<std::endl;
    ex10();

    std::cout << "№11_______________________________" <<std::endl;
    ex11();

    std::cout << "№12_______________________________" <<std::endl;
    ex12();

    std::cout << "\n№13_______________________________" <<std::endl;
    ex13();

    std::cout << "\n№14_______________________________" <<std::endl;
    ex14();


    return 0;
}
