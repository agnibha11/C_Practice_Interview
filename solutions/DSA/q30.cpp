#include <iostream>
#include <map>
using namespace std;

int main(){

    int len;
    cout << "Length of the array: ";
    cin >> len;

    int array[len];

    for(int i = 0; i < len; i++){
        cout << "Value at: " << i << ": ";
        cin >> array[i];
    }

    //hash the array
    map<int,int> hashmap;
    for(int i = 0; i < len; i++){
        hashmap[array[i]]++;
    }

    //find any duplicates
    for(auto it : hashmap){
        if(it.second >= 2){
            cout << "Array has duplicate elements" << endl;
            return 0;
        }
    }

    cout << "Array has no duplicate elements" << endl;

    return 0;
}