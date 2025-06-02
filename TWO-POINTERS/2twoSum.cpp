#include<iostream>
using namespace std;
int main(){
    int arr[200] , target , size;
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << "Enter the elements of array in ascending order : ";
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }

    cout << "Enter the total value : ";
    cin >> target;

    //Approach 1 --> Brute force method  , check all posibilities
    // for(int i = 0 ; i < size-1 ; i++){
    //     for(int j = i+1 ; j < size ; j++){
    //         if(arr[i]+arr[j] == target){
    //             cout << arr[i] << " " << arr[j] << endl ;
    //         }
    //     }
    // }



    // Approch 2 --> Using a Binary Search method

    // int x , start , end , mid;
    // for(int i = 0 ; i < size -1 ; i++){
    //     x = target - arr[i];
    //     start = i + 1;
    //     end = size - 1;
    //     while (start <= end){   
    //         mid = start + (end - start) / 2;
    //         if(arr[mid] == x){
    //             cout << arr[mid] << " " << arr[i] << endl;
    //             break;
    //         } else {
    //             if(arr[mid] < x){
    //                 start = mid + 1;
    //             } else {
    //                 end = mid - 1;
    //             }
    //         }
    //     }
        
    // }



    // Approch 3 --> 
    // 1. arr[start] + arr[end] == target ----> Ans found
    // 2. arr[start] + arr[end] > target ----> end--
    // 3. arr[start] + arr[end] < target ----> start++

    int start = 0 , end = size - 1;
    while (start < end){
        if(arr[start] + arr[end] == target){
            cout << arr[start] << " " << arr[end] << endl ;
            break;
        } else {
            if(arr[start] + arr[end] > target){
                end--;
            }else{
                start++;
            }
        }
    }
    if(start == end){
        cout << "Ans not found !!!" << endl;
    }

    // for(int i = 0 ; i < size - 1 ; i++){
    //     int start = i + 1 , end = size - 1 , mid;
    //     while(start <= end){
    //         mid = start + (end - start)/2;
    //         if(arr[i] + arr[mid] == total){
    //             cout << arr[i] << "  " << arr[mid];
    //         } else if(arr[i] + arr[mid] > total){
    //             end = mid - 1;
    //         } else {
    //             start = mid + 1;
    //         }
    //     }
    // }
}