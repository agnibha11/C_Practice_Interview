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

    cout << "Value of k: ";
    int k;
    cin >> k;


    map<int,int> lastseen;

    //we will map each value to the index where it was last seen, and on repeat, we will compare the gap
    for(int i = 0; i < len; i++){
        auto it = lastseen.find(array[i]);
        if(it != lastseen.end()){
            //means it has found the same elemetn
            if(i - it->second <= k){
                cout << "Found elements within range" << endl;
                return 0;
            }
        }
        lastseen[array[i]] = i;
    }

    cout << "No Duplicate element found within that range" << endl;

    return 0;
}