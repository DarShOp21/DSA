#include<iostream>
using namespace std;
int main(){
    int arr[200] , size;
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << "Enter the elements of array : ";
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }

    int suffix[size];
    suffix[size-1] = arr[size-1];
    for(int i = size-2 ; i >= 0 ; i--){
        suffix[i] = suffix[i+1] + arr[i];
    }

    for(int i = 0 ; i < size ; i++){
        cout << suffix[i] << " ";
    }
    cout << endl;
    return 0;
}