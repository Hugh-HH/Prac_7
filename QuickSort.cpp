#include "QuickSort.h"
#include <cmath>
#include <iostream>

std::vector<int> QuickSort::sort(std::vector<int> list) {
    if (list.size() <= 1) {
        return list;
    }

    std::vector<int> less; 
    std::vector<int> greater;
    int piVal = 0;
    int pivot = 0;
    
    if (list.size() <= 1) {
            std::cout << ' HERE ';
        return list;
    }

    if (list.size() <= 2) {
        pivot = 0;
        piVal = list.at(0);

    } else {
        pivot = 2;
        piVal = list.at(2);
    }
    

    for (int i = 0; i < list.size(); i++) {
        if (i != pivot) {
            if (list.at(i) <= piVal) {
                less.push_back(list.at(i));
            }
            if (list.at(i) > piVal) {
                greater.push_back(list.at(i));
            }   
        }
    }

    less = sort(less);

    less.push_back(piVal);

    greater = sort(greater);

    for(int i = 0; i < greater.size(); i++) {
        less.push_back(greater.at(i));
    }
        std::cout << ' here ';
    return less; 
    
}