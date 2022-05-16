#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> vec, int search) {
    
    return recSearch(vec, search, 0, vec.size());
}

bool RecursiveBinarySearch::recSearch(std::vector<int> vec, int search, int start, int end) {
  
    if(start > end) {
        return false;
    }

    int mid = start + (end - start)/2;

    if(vec.at(mid) == search) {
        return true;
    }
    else if(vec.at(mid) < search) { 
        return recSearch(vec, search, mid+1 , end);
    }

    else if(vec.at(mid) > search) { 
        return recSearch(vec, search, start, mid-1);
    }

}