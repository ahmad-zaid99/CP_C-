#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool inc = true, dec = true;
    for (ll i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
            dec = false;
        else if (arr[i] < arr[i - 1])
            inc = false;
    }
    // if(inc){
    //     cout<<"0\n";
    // }else if(dec){

    // }
    if (arr[n - 2] > arr[n - 1])
    {
        cout << "-1\n";
    }
    else if (inc)
    {
        cout << "0\n";
    }
    else if (arr[n - 2] - arr[n - 1] > arr[n - 2])
    {
        cout << "-1\n";
    }
    else
    {
        cout << n - 2 << "\n";
        for (int i = 1; i < n - 1; i++)
        {
            cout << i << " " << n - 1 << " " << n << "\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}