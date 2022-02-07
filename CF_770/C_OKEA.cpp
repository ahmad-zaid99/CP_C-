#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double

const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


void solve() {
    int n,k;
    cin>>n>>k;
    vector<vector<int>> arr(n+1,vector<int>(k+1,0));
    bool flag=false;
    if(k==1){
        //int i=1;
        flag = true;
        int j=1;
        while(j<=n){
            arr[j][1]=j;
            j++;
        }
    }else if(n%2==0){
        flag=true;
        int i,j,val=1;
        for(j=1;j<=k;j++){
            for(i=1;i<=n;i++){
                arr[i][j]=val;
                val++;
            }
        }
    }
    if(flag){
        cout<<"YES\n";
        for(int i=1;i<=n;i++){
            for(int j=1;j<=k;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }
    }else{
        cout<<"NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}