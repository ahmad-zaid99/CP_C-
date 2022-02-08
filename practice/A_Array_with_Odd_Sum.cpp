#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double

const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


void solve() {
    int n;
    cin>>n;
    int odd=0,even=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x%2==0) even++;
        else odd++;
    }

    if(n%2==0){
        if(even == 0 || odd == 0) cout<<"NO\n";
        else cout<<"YES\n";
    }else{
        if(odd==0) cout<<"NO\n";
        else cout<<"YES\n";
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