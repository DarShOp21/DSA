#include<iostream>
#include<vector>

using namespace std;

int main(){
    //vector<vector<data_type>> matrixName(rows , vector<data_type>(columns , initial_value))
    vector<vector<int>> matrix(3 , vector<int>(4,0));

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cout << matrix[i][j] << "  ";
        }
        cout << endl ;
    }

    //Number of rows : 
    cout <<"Number of rows : " << matrix.size() << endl;

    //Number of colums :
    cout <<"Number of colums :" << matrix[0].size() << endl;

    return 0;
}