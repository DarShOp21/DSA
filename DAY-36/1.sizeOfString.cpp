#include<iostream>

using namespace std;

int sizeOfString(string str){
    int count = 0;
    while(str[count] != '\0')
    count++;

    return count;
}

int main(){
    string name = "darshan";
    cout << "Size of the string " << name << " is " <<sizeOfString(name) << endl;

    return 0;
}