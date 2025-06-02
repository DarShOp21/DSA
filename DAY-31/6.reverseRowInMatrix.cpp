#include<iostream>

using namespace std;

void revMatrix(int matrix[][3] , int row , int col ){
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col/2 ; j++){
            swap(matrix[i][j] , matrix[i][col-j-1]);
        }
    }

    cout << endl << endl ;
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
}

int main(){
    int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};

    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    revMatrix(arr,4,3);
    return 0;
}