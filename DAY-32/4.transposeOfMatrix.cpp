#include<iostream>
#include<vector>

using namespace std;

void transposeMatrix(vector<vector<int>> &matrix){
    int row = matrix.size();

    vector<vector<int>> ans(row , vector<int>(row , 0));
    for(int i = 0 ; i < row ; i++){
        for(int j = i+1 ; j < row ; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
}

int main(){
    int row;
    cout << "For getting the transpose , the matrix should be sqaure matrix ." << endl << "Enter the number of rows : ";
    cin >> row;

    vector<vector <int>> matrix(row , vector<int>(row , 0));
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < row ; j++){
            cin >> matrix[i][j];
        }
    }

    transposeMatrix(matrix);

    cout << "Transpose matrix : " << endl;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < row ; j++){
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }

    cout << endl;
}