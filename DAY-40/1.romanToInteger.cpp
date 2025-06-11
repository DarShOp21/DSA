#include<iostream>

using namespace std;

int num(char c){
    if(c == 'I')
    return 1;
    else if(c == 'V')
    return 5;
    else if(c == 'X')
    return 10;
    else if(c == 'L')
    return 50;
    else if(c == 'C')
    return 100;
    else if(c == 'D')
    return 500;
    else
    return 1000;
}

int romanToInt(string str){
    int sum = 0 , index = 0;
    while(index < str.size()-1){
        if(num(str[index]) < num(str[index+1])) 
        sum -= num(str[index]);
        else
        sum += num(str[index]);
        index++;
    }
    sum += num(str[str.size()-1]);

    return sum;
}

int main(){
    cout << "Enter a roman number";
    string roman ;
    cin >> roman;

    cout << romanToInt(roman) << endl;

    return 0;
}