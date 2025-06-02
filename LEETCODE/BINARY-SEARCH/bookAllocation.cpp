#include<iostream>
using namespace std;

int bookAllocation(int arr[] , int size , int students){
    if(students > size){
        return -1;
    }
    
    int start = 0 , end = 0 , mid , ans;
    for(int i = 0 ; i < size ; i++){
        start = max(start , arr[i]);
        end += arr[i];
    }

    while(start <= end){
        mid = end + (start - end)/2;
        int pages = 0 , count = 1;
        for(int i = 0 ; i < size ; i++){
            pages += arr[i];
            if(pages > mid){
                count++;
                pages = arr[i];
            }
        }

        if(count <= students){
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
} 


int main(){
    int arr[] = {20 , 50 , 14 , 90} , size = 4 , students = 2;
    cout << bookAllocation(arr , size , students);
}
