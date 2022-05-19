#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>   

int main() {

    // BubbleSort bubblesort;

    // std::vector <int> vec = {4,2,6,3,8,9,2};

    // vec = bubblesort.sort(vec);

    // for (int i = 0; i < vec.size(); i++){
    //     std::cout << vec.at(i) << " ";
    // }

    // std::vector<int> vec = {1, 3, 5, 4, -5, 100, 7777, 2014};

    // QuickSort quick;

    // RecursiveBinarySearch recBS;

    // vec = quick.sort(vec);

    // recBS.search(vec, 1);

    Sort* quick = new QuickSort();
    RecursiveBinarySearch* rec = new RecursiveBinarySearch();

    std::string str;
    std::vector<int> input;


    std::getline(std::cin, str);

    std::stringstream ss(str); 
        for (int i; ss >> i;) 
            input.push_back(i);

    input = quick->sort(input); 

    
    if(rec->search(input, 1) == true) {
        std::cout << std::endl;
        std::cout << "true ";
        
        for(int i = 0; i < input.size(); i++) {
            std::cout << input.at(i) << ' ';
        }
        

    }
    else {
        std::cout << std::endl;
        std::cout << "false ";

        for(int i = 0; i < input.size(); i++) {
            std::cout << input.at(i) << ' ';
        }
        
    }
}

