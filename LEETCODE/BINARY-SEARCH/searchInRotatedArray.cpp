#include<iostream>
using namespace std;
int main(){
    int arr[200], size , target;
    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the elements of Rotated Array : ";
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }

    cout << "Enter the target value : ";
    cin >> target;
    
    int start = 0 , end = size - 1, mid ;
    while(start <= end){
        mid = start + (end - start)/2;
        
        if(arr[mid] == target){
            cout << mid ;
            return 0;
        } else if(arr[mid] >= arr[0]){
            if(arr[start] <= target && target < arr[mid]){
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } else{
            if(arr[mid] < target && target <= arr[end]){
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    cout << "Not present" ;
    return 0;
}