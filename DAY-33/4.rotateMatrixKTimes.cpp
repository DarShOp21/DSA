#include<iostream>
#include<vector>

using namespace std;

void rotateMatrixByK(vector<vector <int>>&matrix , int k){
    int row = matrix.size() , rotation = 0;
    while(rotation < k%4){
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
        rotation++;
    }
}

int main(){
    int row , k;
    cout << "For rotating the matrix by 90 , the matrix should be sqaure matrix ." << endl << "Enter the number of rows : ";
    cin >> row;

    vector<vector <int>> matrix(row , vector<int>(row , 0));
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < row ; j++){
            cin >> matrix[i][j];
        }
    }
    cout << endl << "Enter the value of K : ";
    cin >> k;

    cout << endl ;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < row ; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    rotateMatrixByK(matrix , k);
    cout << endl ;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < row ; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}