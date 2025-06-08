#include<iostream>

using namespace std;

string defangIp(string ipAddress){
    string defangedIp;
    int start = 0 ;
    while(start < ipAddress.size()){
        if(ipAddress[start] == '.')
        defangedIp += "[.]";
        else
        defangedIp += ipAddress[start];

        start++;
    }

    return defangedIp;
}

int main(){
    string address = "198.287.96.1";

    cout << defangIp(address) << endl;

    return 0;
}