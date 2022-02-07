#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double

const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


void solve() {
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    string rev = s;
    reverse(rev.begin(),rev.end());
    if(s==rev){
        cout<<"1"<<"\n";
    }else{
        if(k==0) cout<<"1\n";
        else cout<<"2\n";
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