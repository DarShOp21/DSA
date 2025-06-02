#include<iostream>
using namespace std;

int binarySearch(int arr[], int size , int key){
    int first = 0 , last = size-1, mid;
    while (first <= last){
        if(arr[first] == key)
            return first;
        mid = first + ((last - first)/2);
        if(arr[mid] == key)
            return mid; 
        else if(arr[mid] < key)
            first = mid + 1;
        else
            last = mid - 1;
    }
    return -1;
}

int main(){
    int size ;
    int arr[200];
    int key ;
    cout << "Enter the size of array : ";
    cin >> size;
    cout << "Enter the elements of the array in ascending order : ";
    for(int i = 0 ; i < size ; i++)
        cin >> arr[i];
    cout << "Enter the element to find : ";
    cin >> key;

    cout <<binarySearch(arr , size , key)<<endl;

    // int first = 0 , last = size-1 , mid;

    // while (first <= last){
    //     mid = (first + last)/2;
    //     if(arr[mid] == toFind){
    //         cout << toFind << " is at index " << mid ;
    //         return 0;
    //     }
    //     if(arr[mid] > toFind){
    //         last = mid-1;
    //     }else{
    //         first = mid+1;
    //     }
    // }
    // cout << toFind << " not found in the array";
    return 0;
    
}