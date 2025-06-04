#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> rotateMatBy90(vector<vector<int>>matrix){
    int row = matrix.size();
    vector<vector<int>>ans(row , vector<int>(row , 0));
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < row ; j++){
            ans[j][row-i-1] = matrix[i][j];
        }
    }

    return ans;
}

void rotateMatBy90_2(vector<vector<int>>&matrix){
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

    vector<vector<int>>ans = rotateMatBy90(matrix);

    cout << endl << "Approach 1 : " << endl;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < row ; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "Approach 2 : " << endl;
    rotateMatBy90_2(matrix);
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < row ; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}   