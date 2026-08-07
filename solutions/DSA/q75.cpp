#include <iostream>
using namespace std;

int binSearch(int *arr, int length, int target){
    int lo = 0;
    int hi = length - 1;

    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(arr[mid] == target)
            return mid;
        else if(arr[mid] < target){
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }

    return -1; //not found
}


int main(){

}