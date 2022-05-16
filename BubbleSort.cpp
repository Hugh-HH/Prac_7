#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list) {

    for(int k = 0; k < (list.size()-1); k++) {

        for(int i = 0; i < (list.size()-1); i++) {

            if (list.at(i) > list.at(i+1)) {

                int temp = list.at(i);
                list.at(i) = list.at(i+1);
                list.at(i+1) =  temp;
                
            }
        }
    }

    return list;
}