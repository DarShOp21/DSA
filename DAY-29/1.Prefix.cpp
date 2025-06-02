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

    int prefix[size];
    prefix[0] = arr[0];
    for(int i = 1 ; i < size ; i++){
        prefix[i] = arr[i] + prefix[i-1];
    }

    for(int i = 0 ; i < size ; i++){
        cout << prefix[i] << " ";
    }
    cout << endl;
    return 0;
}