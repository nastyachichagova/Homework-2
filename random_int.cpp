//
// Created by Anastasia Chichagova on 06.01.2023.
//

#include "Headers/random_int.h"
int random_int(int a, int b){
    return a + rand() % (b - a);
}