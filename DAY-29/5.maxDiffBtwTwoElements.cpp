//Give the maximum difference btwn two elements but the element should be subracted from the element which is present at the RHS of the element
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

vector<int> suffixMaxArr(vector<int>arr){
    int size = arr.size();
    vector<int> suffixMax(size);
    suffixMax[size - 1] = arr[size - 1]; 
    for(int i = size - 2 ; i >= 0 ; i--){
        suffixMax[i] = max(arr[i] , suffixMax[i+1]);
    }
    return suffixMax;
}

int maxDiff(vector<int>arr){
    vector<int> result = suffixMaxArr(arr);

    int diff = INT_MIN;
    for(int i = 0 ; i < arr.size() ; i++){
        diff = max(diff , result[i] - arr[i] );
    }

    return diff;
}

int main(){
    int size ;
    cout << "Enter the value of size : ";
    cin >> size;

    vector<int>arr(size);
    cout << "Enter the elements of the array : ";
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }

    cout << maxDiff(arr) << endl;
    
    return 0;
}