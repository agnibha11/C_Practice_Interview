#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){

    //array input
    int n;
    cout << "Array Size: ";
    cin >> n;
    cout << endl;

    //create dynamic array based on size
    int array[n];
    
    //take input for array
    for(int i = 0; i < n; i++){
        cout << "Value at element: " << i << ": ";
        cin >> array[i];
        cout << endl;
    }

    int target;
    cout << "Target value: ";
    cin >> target;
    cout << endl;

    //create the map
    map<int,int> seen;
    for(int i = 0; i < (n); i++){
        auto it = seen.find(target - array[i]);
        if(it != seen.end()){
            cout << "Found pairs at: " << it->second << " and " << i << endl;
            return 0;
        }
        seen[array[i]] = i;
    }

    cout << "No pairs found!" << endl;
    return 0;
}