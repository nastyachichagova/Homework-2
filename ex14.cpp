//
// Created by Anastasia Chichagova on 09.01.2023.
//

#include "Headers/ex14.h"
void ex14(){
    int prices[] = {7,1,5,3,6,4};
    int profit, max_profit = 0;
    int min_price = prices[0];


    int size = sizeof(prices)/sizeof(prices[0]);

    for (int i = 0; i < size; i++){
        if (prices[i] < min_price)
            min_price = prices[i];
        profit = prices[i] - min_price;
        if (max_profit < profit)
            max_profit = profit;
    }


    std::cout << "\nmin_price\t" << min_price;


    std::cout << "\nmax_profit\t" << max_profit;

}