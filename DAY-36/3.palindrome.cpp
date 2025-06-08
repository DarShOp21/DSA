#include<iostream>

using namespace std;

bool isPalindrome(string str){
    int start = 0 , end = str.size()-1;

    while(start < end){
        if(str[start] != str[end])
        return false;
        start++, end--;
    }

    return true;
}

int main(){
    // string str = "naman";
    string str = "darshan";

    if(isPalindrome(str))
    cout << str << " is Palindrome" << endl;
    else
    cout << str << " is not a Palindrome" << endl;
}