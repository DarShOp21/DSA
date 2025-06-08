#include<iostream>

using namespace std;

string rotateStringClockwise(string str){
    char last = str[str.size()-1];
    for(int i = str.size()-1 ; i > 0 ; i--)
        str[i] = str[i-1];

    str[0] = last;

    return str;
}

string rotateStringAntiClockwise(string str){
    char first = str[0];
    for(int i = 0 ; i < str.size()-1 ; i++)
    str[i] = str[i+1];

    str[str.size()-1] = first;

    return str;
}

bool chkIfStringIsRotated(string str1 , string str2){
    if(rotateStringClockwise(rotateStringClockwise(str2)) == str1){
        cout << "The string is rotated anti-clockwise";
        return true;
    } else if(rotateStringAntiClockwise(rotateStringAntiClockwise(str2)) == str1){
        cout << "The string is rotated clockwise";
        return true;
    }

    return false;
}

int main(){
    string str1 = "darshan";
    string str2 = "andarsh";

    cout << chkIfStringIsRotated(str1 , str2) << endl;

    return 0;
}