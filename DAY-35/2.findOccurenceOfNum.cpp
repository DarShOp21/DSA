#include<iostream>
#include<vector>

using namespace std;

vector<int> findOccurence(vector<int>&arr){
    int size = arr.size();

    for(int i = 0 ; i < size ; i++)
    arr[i]--;

    for(int i = 0 ; i < size ; i++)
        arr[arr[i]%size] += size;

    for(int i = 0 ; i < size ; i++)
    arr[i] /= size ;

    return arr;
}

int main(){
    vector<int>arr = {2,1,3,1,5,4,4};

    findOccurence(arr);

    for(int i = 0 ; i < arr.size() ; i++)
    cout << i+1 << "-->" << arr[i] << "  ";

    cout << endl;
    return 0;
}