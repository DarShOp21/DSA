#include<iostream>

using namespace std;

int main(){
    int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int target ;
    cout << "Enter the target value : ";
    cin >> target;

    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(arr[i][j] == target){
                cout << "Target found " << endl;
                return 0;
            }
        }
    }
    cout << "Target not found" << endl;
    return 0;
}