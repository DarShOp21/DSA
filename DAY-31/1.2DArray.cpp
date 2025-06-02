#include<iostream>
using namespace std;

void findIndex(){

    int row , col , row_index , col_index;

    cout << "Enter the number of rows : ";
    cin >> row ;

    cout << "Enter the number of colums : ";
    cin >> col;

    cout << "Enter the row-index of your element : ";
    cin >> row_index;

    cout << "Enter the column-index of your element : ";
    cin >> col_index;

    int index = (row_index * col) + col_index;

    cout << "The index of your element is -->  " << index << endl;

}


void findRowColIndex(){
    int index , row , col;

    cout << "Enter the number of rows : ";
    cin >> row ;

    cout << "Enter the number of colums : ";
    cin >> col;

    cout << "Enter the value of index : ";
    cin >> index;

    int row_index , col_index ;
    row_index = index / col;

    col_index = index % col;

    cout << "Row index --> " << row_index << endl << "Column index --> " << col_index << endl;
}


int main(){

    int option;

    cout << "What you want to find : " << endl << "1 . Index using row_index and col_index " << endl << "2 . row_index and col_index using Index " << endl ;
    cin >> option;
    
    if(option == 1){
        findIndex();
    }else if(option == 2){
        findRowColIndex();
    }else {
        cout << "Select valid option (i.e. 1 or 2)"<< endl;
        main();
    }

    return 0;
}