#include<iostream>
using namespace std;

int main(){
    int arr[10] = {5,2,6,9,7,15,12,9,10}; 
    
    for(int i = 0 ; i < 9 ; i++){
        int index = i;
        for(int j = i+1 ; j < 10 ; j++){
            if(arr[j] < arr[index]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    for(int i = 0 ; i < 10 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}