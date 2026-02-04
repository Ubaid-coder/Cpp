#include <iostream>
using namespace std;

void reverseArray(int arr[], int sz){
    int start = 0, end = sz-1;

    while(start<sz){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
};

int main(){
    int arr[] = {4,5,67,8,2,4,6};
    int sz = sizeof(arr)/sizeof(int);
    
    reverseArray(arr, sz);
    for(int i=0; i<sz; i++){
        cout << arr[i];
    }
    return 0;
}