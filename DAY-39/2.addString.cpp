#include<iostream>
#include<algorithm>

using namespace std;

string addString(string num1 , string num2){
    string ans;
    int index1 = num1.size()-1 , index2 = num2.size()-1;
    int carry = 0 , sum;

    while(index2 >= 0){
        sum = (num1[index1]-'0') + (num2[index2]-'0') + carry;
        carry = sum / 10;
        char c = sum % 10 + '0';
        ans+= c;
        index1--,index2--;
    }

    while(index1 >= 0){
        sum = (num1[index1]-'0') + carry;
        carry = sum / 10;
        char c = sum % 10 + '0';
        ans+= c;
        index1--;
    }

    if(carry)
    ans+='1';

    reverse(ans.begin() , ans.end());

    return ans;
}

int main(){
    string num1 , num2;
    cout << "Enter two numbers : ";
    cin >> num1;
    cin >> num2;

    if(num1.size() >= num2.size())
    cout << addString(num1,num2);
    else
    cout << addString(num2,num1);

    return 0;
}