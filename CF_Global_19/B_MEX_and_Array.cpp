#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double

const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


void solve() {
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll dp[n][n] = {0};
    for(int len = 1;len<=n;len++){
        for(int i=0;i<=n-len;i++){
            int j = i+len-1;
            ll mex = INT_MAX;
            unordered_set<ll> st;
            for(int k = i;k<=j;k++){
                st.insert(arr[k]);
            }
            mex=0;
            while(1){
                if(st.find(mex)==st.end()) break;
                mex++;
            }
            ll res=0;
            if(len==1){
                res = 1 + 
            }
        }
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