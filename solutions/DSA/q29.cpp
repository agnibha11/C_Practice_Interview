#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Array size: ";
    cin >> size;
    cout << endl;
    
    //declare array
    int array[size];

    for(int i = 0; i < size; i++){
        cout << "Value at " << i << ": " ;
        cin >> array[i];
        cout << endl;
    }

    int curr = array[0], best = array[0];
    for(int i = 1; i < size; i++){
        curr = max(array[i], curr + array[i]);
        best = max(best, curr);
    }

    cout << best << endl;
    return 0;
}