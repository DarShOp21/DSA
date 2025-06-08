#include<iostream>
#include<vector>

using namespace std;

int majorityElem(vector<int>arr){
    int candidate , count = 0 , size = arr.size();
        
    for(int i = 0 ; i < size ; i++){
        if(count == 0){
            candidate = arr[i];
            count = 1;
        } else {
            if(arr[i] == candidate)
            count++;
            else 
            count--;
        }
    }
        
    count = 0;
    for(int i = 0 ; i < size ; i++)
    if(arr[i] == candidate)
    count++;
        
    if(count > size/2)
    return candidate;
        
    return -1;
}

int main(){
    vector<int>arr = {3,3,2,4,1,3,2,2,1,4,3};

    cout << majorityElem(arr) << endl;

    return 0;
}