#include<iostream>
using namespace std;

int main(){
    int arr[200];
    int size ;

    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the elements in the array : ";
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }

    for(int i = 1 ; i < size ; i++){
        for(int j = i ; j > 0 ; j--){
            if(arr[j] < arr[j-1]){
                swap(arr[j],arr[j-1]);
            }else{
                break;
            }    
        }
    }

    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}