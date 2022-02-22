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
    ll o = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        o = o | arr[i];
    }
    ll res = 0;
    for (int i = 0; i <= 30; i++)
    {
        if (((o >> i) & 1) == 1)
        {
            res += 1 << i;
        }
    }
    cout << res << "\n";
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