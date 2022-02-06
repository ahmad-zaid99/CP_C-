#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        cout<<b<<" "<<c<<" "<<c<<"\n";

        // vector<vector<int>> bin(3,vector<int>(3,0));
        // bin[0][0]=a;
        // bin[0][1]=b;
        // bin[1][0]=b;
        // bin[1][1]=c;
        // bin[2][0]=c;
        // bin[2][1]=d;
        // while(!(bin[0][2]+bin[1][2]>bin[2][2])){
        //    bin[0][2] = (bin[0][0]+bin[0][1])/2;
        //    bin[1][2] = (bin[1][0]+bin[1][1])/2;
        //    bin[2][2] = (bin[2][0]+bin[2][1])/2;
        //    bin[0][0] = bin[0][2];
        //    bin[1][0] = bin[1][2];
        //    bin[2][1] = bin[2][2];
        // }
        // cout<<bin[0][2]<<" "<<bin[1][2]<<" "<<bin[2][2]<<"\n";

    }
    return 0;
}