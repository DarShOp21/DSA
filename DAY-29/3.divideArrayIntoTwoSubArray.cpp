//In this we have to divide the array into 2 sub-array with equal sum of the sub-array

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

    int total = 0;
    for(int i = 0 ; i < size ; i++)
        total += arr[i];

    int prefix = 0;
    for(int i = 0 ; i < size-1 ; i++){
        prefix += arr[i];
        if(prefix == total/2 ){
            cout << "Can be divided" << endl;
            return 1;
        }
            
    }

    cout << "Array cant be divide into 2 half of equal sum." << endl;
    
    return 0;
    
}