#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double

const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


void solve() {
    string str;
    cin>>str;
    ll nb,ns,nc;
    cin>>nb>>ns>>nc;
    ll cb,cs,cc;
    cin>>cb>>cs>>cc;
    ll r;
    cin>>r;
    
    int len = str.length();
    ll b = 0, s = 0, c = 0;
    for(int i=0;i<len;i++){
        if(str[i]=='B') b++;
        else if(str[i]=='S') s++;
        else c++;
    }

    ll res = 0;
    ll low = 0;
    ll high = INF; 
    if(b>0) high = (r+nb)/b ;
    else if(s>0) high = (r+ns)/s;
    else if(c>0) high = (r+nc)/c;

    //cout<<low<<endl<<high;
    while(low<=high){
        ll mid = low + (high-low)/2;
        //cout<<mid<<"\n";
        ll rb = mid*b;
        ll rs = mid*s;
        ll rc = mid*c;

        ll cost = 0;

        cost+= ((rb>nb)?(rb-nb)*cb:0) ;
        cost+= ((rs>ns)?(rs-ns)*cs:0) ;
        cost+= ((rc>nc)?(rc-nc)*cc:0) ;

        if(cost<=r){
            res = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }

    }
    cout<<res<<"\n";

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}