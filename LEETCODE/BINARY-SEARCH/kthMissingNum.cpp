#include<iostream>
using namespace std;
int main(){
    int arr[200],size , k ;

    cout << "Enter the size of the array : ";
    cin >> size;

    cout << "Enter the elements of the array : ";
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }

    cout << "Enter the value of k :";
    cin >> k;

    int start = 0 , end = size - 1 , mid , index=size;
    while(start <= end){
        mid = start + (end - start)/2;
        if(arr[mid]-mid-1 >= k){
            index = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    cout << "The " << k << " missing number is " << index+k << endl;
    return 0;
}