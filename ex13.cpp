//
// Created by Anastasia Chichagova on 09.01.2023.
//

#include "Headers/ex13.h"
void ex13(){
    srand (time(NULL));

    int m, n;
    m = n = random_int(2, 5);

    int *nums1 = new int [m + n];
    int *nums2 = new int [n];

    for (int i = 0; i < m; i++)
        *(nums1 + i) = random_int(1, 5);

    for (int i = m; i < m + n; i++)
        *(nums1 + i) = 0;

    for (int i = 0; i < n; i++)
        *(nums2 + i) = random_int(1, 5);

    arr_sort(nums1, 0, m - 1, true);
    arr_sort(nums2 ,0, n, true);

    std::cout << "m\t" << m;
    std::cout << "\nn\t" << n;

    std::cout << "\nnums1\t";
    for (int i = 0; i < m + n; i++)
        std::cout << *(nums1 + i) << " ";

    std::cout << "\nnums2\t";
    for (int i = 0; i < n; i++)
        std::cout << *(nums2 + i) << " ";

    int p1 = m - 1 , p2 = n - 1 , k = m + n - 1;

    while (p2 >= 0){
        if(p1 >= 0 && nums1[p1] > nums2[p2]){
            nums1[k--] = nums1[p1--];
        }
        else{
            nums1[k--] = nums2[p2--];
        }
    }

    std::cout << "\nИтог\t";
    for (int i = 0; i < m + n; i++)
        std::cout << *(nums1 + i) << " ";


    delete[] nums1;
    delete[] nums2;
}