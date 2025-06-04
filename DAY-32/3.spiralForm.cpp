#include<iostream>
#include<vector>

using namespace std;

vector<int> spiralForm(vector<vector<int>>matrix ){
    int row = matrix.size();
    int col = matrix[0].size();
    vector<int> ans;
    int top = 0 , bottom = row-1 , left = 0 , right = col - 1;

    while(top <= bottom && left <= right ){
        //print top 
        for(int i = left ; i <= right ; i++ ){
            ans.push_back(matrix[top][i]);
        }
        top++;

        //print right
        for(int i = top ; i <= bottom ; i++){
            ans.push_back(matrix[i][right]);
        }
        right--;

        //print bottom
        if(top <= bottom){
            for(int i = right ; i >= left ; i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        

        //print left
        if(left <= right){
            for(int i = bottom ; i >= top ; i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        
    }
    return ans;
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

    cout << endl;

    vector<int>ans = spiralForm(matrix  );

    for(int i = 0 ; i < ans.size() ; i++){
        cout << ans[i] << "  ";
    }

    cout << endl;

    return 0;
}
