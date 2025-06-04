#include<iostream>
#include<vector>

using namespace std;

void rotateAntiClkWise(vector<vector<int>>&matrix){
    int row = matrix.size();

    //First will find the transpose of the matrix
    for(int i = 0 ; i < row ; i++)
    for(int j = i+1 ; j < row ; j++)
    swap(matrix[i][j] , matrix[j][i]);

    //Exchange the rows
    int start = 0 , end = row-1;
    while (start < end){
        for(int i = 0 ; i < row ; i++)
        swap(matrix[start][i], matrix[end][i]);
        start++,end--;
    }
}

int main(){
    int row;
    cout << "For rotating the matrix by 90 , the matrix should be sqaure matrix ." << endl << "Enter the number of rows : ";
    cin >> row;

    vector<vector <int>> matrix(row , vector<int>(row , 0));
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < row ; j++){
            cin >> matrix[i][j];
        }
    }
    cout << endl ;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < row ; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    rotateAntiClkWise(matrix);
    cout << endl ;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < row ; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}