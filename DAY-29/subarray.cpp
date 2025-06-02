#include<iostream>
#include<vector>

using namespace std;

void subarray(vector<int>arr){
    for(int i = 0 ; i < arr.size() ; i++){          //Use to manage the size of the subarray
        cout << i+1 << " size subarray : ";
        for(int j = 0 ; j < arr.size() ; j++ ){     
            if(i + j >= arr.size()){                //It will check whether its not going out of the array 
                break;
            }
            cout << "[";
            for(int k = j ; k <= i+j ; k++){
                cout << arr[k] << " ";
            }
            cout << "]   ";
        }
        cout << endl;
    }
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

    subarray(arr);
}