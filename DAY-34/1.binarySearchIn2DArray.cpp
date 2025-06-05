#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<vector<int>> matrix , int target){
    int row = matrix.size();
    int col = matrix[0].size();

    for(int i = 0 ; i < row ; i++){
        if((matrix[i][0] <= target) && (target <= matrix[i][col-1])){
            int start = 0 , end = col-1;
            while(start <= end){
                int mid = start + (end - start)/2;
                if(matrix[i][mid] == target){
                    cout << i << " " << mid;
                    return i;
                } else if(matrix[i][mid] > target)
                end = mid-1;
                else
                start = mid+1;
            }
        }
    }
    return -1;
}

int binarySearch2(vector<vector<int>> matrix , int target){
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0 , end = (row*col)-1;
    while (start <= end){
        int mid = start + (end-start)/2;
        int row_index = mid / col;
        int col_index = mid % col;

        if(matrix[row_index][col_index] == target){
            cout << row_index << " " << col_index;
            return 1;
        } else if(matrix[row_index][col_index] < target)
        start = mid+1;
        else
        end = mid-1;
    }
    cout << "Not found" << endl;
    return -1;
}

int main(){
    int row , col , target;
    cout << "Enter the values of row and columns : ";
    cin >> row >> col;

    vector<vector <int>> matrix(row , vector<int>(col , 0));
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cin >> matrix[i][j];
        }
    }

    cout << "Enter the target value : ";
    cin >> target;

    cout << endl << binarySearch2(matrix, target);
}