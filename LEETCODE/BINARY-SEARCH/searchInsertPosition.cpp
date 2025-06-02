#include<iostream>
using namespace std;
int main(){
    int arr[200];
    int size , key ;

    cout << "Enter the size of the array : ";
    cin >> size;

    cout << "Enter the elements of the array : ";
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }

    cout << "Enter the value to insert : ";
    cin >> key ;

    int start = 0 , end = size - 1, mid, index = size;
    while (start <= end){
        mid = start + (end - start)/2;
        if(arr[mid] == key){
            index = mid;
            end = mid - 1;
        }else if(arr[mid] < key){
            start = mid + 1;
        } else {
            index = mid;
            end = mid -1;
        }
    }
    if(start > end){
        cout << index << endl;
    }
    return 0 ;
}