#include<iostream>
#include<vector>
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

int main(){

    int size ;
    cout << "Enter the value of size : ";
    cin >> size;

    vector<int>arr(size);
    cout << "Enter the elements of the array : ";
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }

    vector<int> result = suffixMaxArr(arr);
    for(int i = 0 ; i < size ; i++){
        cout << result[i] << "  ";
    }

    cout << endl;
    return 0;
}