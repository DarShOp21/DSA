#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int size ;
    int swapped = 0 ;

    cout << "Enter the size of array :" ;
    cin >> size; 

    cout << "Enter the values of array :" << endl ;
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }

    for(int i = size-1 ; i >= 1 ; i--){
        for(int j = 0 ; j < i ; j++){
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = 1;
            }
        }
        if(swapped == 0){
            cout << "Already sorted" <<endl;
            break;
        }
    }
    
    cout << "Sorted array :";
    for(int i = 0 ; i < size ; i++){
        cout  << arr[i] << " ";
    }
    cout << endl;
    return 0;
}