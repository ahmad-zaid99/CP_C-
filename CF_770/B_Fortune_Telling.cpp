#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double

const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


void solve() {
    ll n,x,y;
    cin>>n>>x>>y;
    ll sum=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        sum+=x;
    }
    ll cnt=0;
    if(x%2!=0) cnt++;
    if(sum%2!=0) cnt++;
    if((cnt%2)==(y%2)) cout<<"Alice\n";
    else cout<<"Bob\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        //cout << "Case #" << t << ": ";
        solve();
    }
}