#include "QuickSort.h"
#include <cmath>

std::vector<int> QuickSort::sort(std::vector<int> list) {
    if (list.size() <= 1) {
        return list;
    }

    std::vector<int> less; 
    std::vector<int> greater;

    if (list.size() <= 2) {
        int pivot = std::round(list.size()/2);
    } else {
        int pivot = 3;
    }
    

    for (int i = 0; i < list.size(); i++) {
        if (list.at(i) <= pivot) {
            less.pushback(list.at(i));
        }
        if (list.at(i) > pivot) {
            greater.pushback(list.at(i));
        }
        
    }
    
    std::vector<int> out;
    

    return 
    
}