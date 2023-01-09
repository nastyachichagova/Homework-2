//
// Created by Anastasia Chichagova on 08.01.2023.
//

#include "Headers/Swap.h"
void Swap (int *pa, int *pb){
    int c = *pa;
    *pa = *pb;
    *pb = c;
}