#include<iostream>
#include<vector>

using namespace std;

bool threeSum1(vector<int>arr , int target){
    int size = arr.size();

    for(int i = 0 ; i < size-2 ; i++){
        for(int j = i+1 ; j < size-1 ; j++){
            for(int k = j+1 ; k < size ; k++){
                if(arr[i] + arr[j] + arr[k] == target){
                    cout << arr[i] << " " <<  arr[j] << " " << arr[k] << endl;
                    return 1;
                }
            }
        }
    }

    return 0;
}


bool threeSum2(vector<int>arr , int target){
    int size = arr.size();

    for(int i = 0 ; i < size - 2 ; i++){
        for(int j = i+1 ; j < size - 1 ; j++){
            int x = target - (arr[i] + arr[j]);
            int start = j+1 , end = size - 1 , mid;
            while (start <= end){
                mid = start + (end - start)/2;
                if(arr[mid] == x){
                    cout << arr[i] << " " << arr[j] << " " << arr[mid] << endl;
                    return 1;
                } else {
                    if(arr[mid] > x){
                        end--;
                    } else {
                        start++;
                    }
                }
            }
        }
    }
    return 0 ;
}


bool threeSum3(vector<int>arr , int target){
    int size = arr.size();

    for(int i = 0 ; i < size-2 ; i++){
        int x = (target - arr[i]) ;
        int start = i+1 , end = size-1;
        while (start < end){
            if(arr[start] + arr[end] == x){
                cout << arr[i] << ' ' << arr[start] << ' ' << arr[end] << endl ;
                return 1;
            }else {
                if(arr[start] + arr[end] > x){
                    end--;
                } else{
                    start++;
                }
            }
        }
    }
    cout << "Not found"<< endl;
    return 0;
}


int main(){
    int size ;
    cout << "Enter the size of the array : ";
    cin >> size;

    if(size < 3){
        cout << "Array size should be atleast of 3 size ." << endl;
        main();
    }

    vector<int>arr(size) ;
    cout << "Enter the elements of the array : ";
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }

    int target ;
    cout << "Enter the target : ";
    cin >> target;

    cout << threeSum1(arr , target) << endl;
    cout << threeSum2(arr , target) << endl;
    cout << threeSum3(arr , target) << endl;

    return 0;
}