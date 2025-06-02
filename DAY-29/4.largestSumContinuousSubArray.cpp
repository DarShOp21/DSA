#include<iostream>
#include<vector>
#include<climits>

using namespace std;


//APPROACH 1 --> Creates all combination of sub-array and compare their values
int maxSumOfSubArray1(vector<int>arr){
    int MAX = INT_MIN;
    for(int i = 0 ; i < arr.size() ; i++){
        int prefix = 0 ;
        for(int j = i ; j < arr.size() ; j++){
            prefix += arr[j];
            MAX = max(MAX , prefix);
        }
    }
    return MAX;
}


//KADANE'S ALGOORITHM
//APPROACH 2 --> In this the algo will make the value of prefix = 0 , once the prefix value becomes less than 0
int maxSumOfSubArray2(vector<int>arr){
    int MAX = INT_MIN , prefix = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        prefix += arr[i]; 
        MAX = max(MAX , prefix);   
        if(prefix < 0 ){
            prefix = 0;
        }
    }
    return MAX;
}


int main(){
    int size ;
    cout << "Enter the size of the array : ";
    cin >> size;

    vector<int>arr(size);
    cout << "Enter the elements of the array : ";
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }

    cout << maxSumOfSubArray1(arr)<<endl;
    cout << maxSumOfSubArray2(arr)<<endl;

    return 0;
}