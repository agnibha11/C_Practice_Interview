#include <iostream>
using namespace std;

int bound(int* arr, int len, int target, bool first){
    int lo = 0, hi = len - 1;
    int result = -1;
    while(lo >= hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid] == target){
            //if first then keep checking left
            result = mid;
            first ? hi = mid - 1 : lo = mid + 1; //continue searching
        }
        else if(arr[mid] < target){
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
    return result;
}

int main(){
    cout << "Array length: ";
    int len;
    cin >> len;

    int array[len];

    for(int i = 0; i < len; i++){
        cout << "Value at " << i << " :";
        cin >> array[i];
    }

    cout << "Target: ";
    int target;
    cin >> target;

    cout << "First/Last";
    bool first;
    cin >> first;

    int index = bound(array,len,target,first);

    if(index != -1){
        first ? cout << "First: " << index << endl : cout << "Last: " << index << endl;
    }


    return 0;
}