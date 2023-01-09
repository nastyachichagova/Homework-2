//
// Created by Anastasia Chichagova on 16.12.2022.
//

#include "Headers/random_double.h"
double random_double (double a, double b){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> distr(a, b);
    auto randomDouble = distr(rd);

    return randomDouble;
}