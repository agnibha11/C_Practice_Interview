#include <cstdio>
using namespace std;

/* C program to find the common elements in two array and print them
*/

int main(){
    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[10] = {1,22,3,44,5,66,7,88,9,110};

    for(int i = 0; i < 10; i++){
        if(arr1[i] == arr2[i]){
            printf("%d equal to %d at %d\n",arr1[i], arr2[i], i);
        }
    }

    return 0;
}