//In this problem a array contains values 0 & 1 and the code makes the array such that all 0 are placed first and then all the 1

#include<iostream>
using namespace std;
int main(){
    int size , arr[200];
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << "Enter the array having elements 0 and 1 : ";
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }


    //APPROACH - 1   --> In this approach it will count the value of 0s and 1s and insert the value in the array according to the count
    // {
    //     int count0 = 0 ;
    //     int count1 = 0 ;
    //     for(int i = 0 ; i < size ; i++){
    //         if(arr[i] == 0){ 
    //             count0++;
    //         } else {
    //             count1++;
    //         }
    //     }

    //     for(int i = 0 ; i < size ; i++){
    //         if(i < count0){
    //             arr[i] = 0;
    //         } else {
    //             arr[i] = 1;
    //         }
    //     }
    // }
    


    //APPROACH - 2    --> In this approach their r 2 pointer pointing both the ends , it will check whether --
    //  1. start == 0 && end == 1 , if yes than start++ and end-- 
    //  2. start == 0 then start++
    //  3. end == 1 then end--
    int start = 0 , end = size - 1 ;
    while (start < end){
        if(arr[start] == 0 ){
            start++;
        } else {
            if(arr[end] == 0){
                swap(arr[start] , arr[end]);
                start++ ;
                end--;
            } else {
                end--;
            }
        }
    }
    

    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
    return 0;
}