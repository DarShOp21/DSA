#include<iostream>
#include<vector>

using namespace std;

void rotateMatBy90(vector<vector<int>>&matrix){
    int row = matrix.size();

    //First will find the transpose of the matrix
    for(int i = 0 ; i < row ; i++)
    for(int j = i+1 ; j < row ; j++)
    swap(matrix[i][j] , matrix[j][i]);

    //Reverse each row 
    for(int i = 0 ; i < row ; i++){
        int start = 0 , end = row-1;
        while (start < end){
            swap(matrix[i][start],matrix[i][end]);
            start++;
            end--;
        }
    }
}

void rotateMatBy180_1(vector<vector <int>>&matrix){
    rotateMatBy90(matrix);
    rotateMatBy90(matrix);
}

void rotateMatBy180_2(vector<vector <int>>&matrix){
    int row = matrix.size();
    int start = 0 , end = row-1;
    while (start < end){
        for(int i = 0 ; i < row ; i++)
        swap(matrix[start][i],matrix[end][i]);
        start++;
        end--;
    }

    for(int i = 0 ; i < row ; i++){
        start = 0 , end = row-1;
        while(start < end){
            swap(matrix[i][start] , matrix[i][end]);
            start++;
            end--;
        }
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

    vector<vector<int>>dupMatrix = matrix;

    // rotateMatBy180_1(dupMatrix);

    // for(int i = 0 ; i < row ; i++){
    //     for(int j = 0 ; j < row ; j++){
    //         cout << dupMatrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << endl << endl;
    rotateMatBy180_2(matrix);

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < row ; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}