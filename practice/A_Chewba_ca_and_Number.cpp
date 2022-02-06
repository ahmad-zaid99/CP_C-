#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++){

        int a = str[i]-48;
        if(a>4){
            a = 9 - a;
        }
        if(!a && !i)continue;
        str[i] = a +'0';
    }
    cout << str << endl;

    return 0;
}