#include<iostream>
using namespace std;

int firstOccurence(int arr[], int size , int key){
    int first = 0 , last = size - 1 , mid , index = -1;
    while(first <= last){
        mid = first + (last - first)/2;
        if(arr[mid] == key ){
            index = mid;
            last = mid - 1;
        } else if(arr[mid] < key){
            first = mid + 1;
        } else {
            last = mid - 1;
        }
    }
    return index;
}

int lastOccurence(int arr[], int size , int key){
    int first = 0 , last = size - 1 , mid , index = -1;
    while(first <= last){
        mid = first + (last - first)/2;
        if(arr[mid] == key){
            index = mid;
            first = mid + 1;
        } else if(arr[mid] < key){
            first = mid + 1;
        } else {
            last = mid - 1;
        }
    }
    return index;
}

int main(){
    int arr[200];
    int size , key ;
    cout << "Enter the size of the array : ";
    cin >> size;
    cout << "Enter the elements of the array : ";
    for(int i = 0 ; i  < size ; i++){
        cin >> arr[i];
    }
    cout << "Enter the element to find its first occurence : ";
    cin >> key;

    cout << firstOccurence(arr , size , key) << endl;
    cout << lastOccurence(arr, size , key) << endl;
    return 0;
}