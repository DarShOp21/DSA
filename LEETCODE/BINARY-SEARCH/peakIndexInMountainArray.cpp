#include<iostream>
using namespace std;
int main(){
    int arr[200], size ;
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << "Enter the elements of Mountain array : ";
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }
    
    int start = 0 , end = size - 1 , mid;
    while(start <= end){
        mid = start + (end - start)/2;
        if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]){
            cout << mid << " is the peak index" << endl ;
            return 0;
        } else if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    cout << "Not present" ;
    return 0;
}