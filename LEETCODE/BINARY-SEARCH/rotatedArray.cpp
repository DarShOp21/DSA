#include<iostream>
using namespace std;
int main(){
    int arr[200], size;
    cout << "Enter the size of the array : ";
    cin >> size ;

    cout << "Enter a rotated array : ";
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }

    int start = 0 , end = size - 1 , mid , ans = arr[0];
    while (start <= end){
        mid = end + (start - end)/2;
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        } else{
            ans = arr[mid];
            end = mid - 1;
        }
    }
    
    cout << ans;
}