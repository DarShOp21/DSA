#include<iostream>
#include<vector>

using namespace std;

void printWaveForm(vector <vector <int>>matrix , int row , int col){
    for(int i = 0 ; i < col ; i++){
        if(i % 2 == 0){
            for(int j = 0 ; j < row ; j++){
                cout << matrix[j][i] << " ";
            }
        } else {
            for(int j = row-1 ; j >= 0 ; j--){
                cout << matrix[j][i] << " ";
            }
        }
    }
}

int main(){
    int row , col;
    cout << "Enter the values of row and columns : ";
    cin >> row >> col;

    vector<vector <int>> matrix(row , vector<int>(col , 0));
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cin >> matrix[i][j];
        }
    }

    cout << "Your matrix : " << endl;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }

    printWaveForm(matrix , row , col);

    return 0;
}