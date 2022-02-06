#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int res=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s[0]=='+' || s[1]=='+'){
            res++;
        }
        else{
            res--;
        }
    }
    cout<<res<<"\n";
    return 0;
}