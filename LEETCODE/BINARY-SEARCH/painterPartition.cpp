#include<iostream>
using namespace std;

// Description: Given an array of boards and a number of painters, partition the boards such that the maximum time taken to paint all boards is minimized.

int painterPartition(int arr[] , int size , int workers){
    int start = 0 , end = 0 , mid , ans;
    for(int i = 0 ; i < size ; i++){
        start = max(start , arr[i]);
        end += arr[i];
    }

    while (start <= end){
        mid = start + (end - start)/2;
        int board = 0 , count = 1;
        for(int i = 0 ; i < size ;i++){
            board += arr[i];
            if(board > mid){
                count++;
                board = arr[i];
            }
        }
        if(count <= workers){
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    
    return ans;
}