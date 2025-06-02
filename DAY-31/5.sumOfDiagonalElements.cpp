#include<iostream>

using namespace std;

int main(){
    // The number of rows and columns should be same
    int size ; 
    cout << "Enter the no of rows : ";
    cin >> size;

    int arr[50][50];

    cout << "Enter the " << size*size <<" elements of the array : ";
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size ; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Your array : " << endl;
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int sum1 = 0 , sum2 = 0;
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size ; j++){
            if( i == j){
                sum1 += arr[i][j];
            }
            if( i+j == size - 1){
                sum2 += arr[i][j];
            }
        }
    }

    cout << "The sum of the diagonal elements are --> " << endl << "For 1st diagonal : " << sum1 << endl << "For 2nd diagonal : " << sum2 << endl;

    return 0;
}