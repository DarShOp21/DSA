#include<iostream>

using namespace std;

string reverseString(string str){
    int start = 0 , end = str.size()-1;

    while(start < end){
        swap(str[start],str[end]);
        start++, end--;
    }
    

    return str;
}

int main(){
    string name = "darshan";

    cout << "The reverse of the string " << name << " is " << reverseString(name) << endl;

    return 0;
}