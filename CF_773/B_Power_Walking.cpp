#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    int n;
    cin >> n;
    int x;
    set<int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp.insert(x);
    }
    int sz = mp.size();
    for (int k = 1; k < sz; k++)
        cout << sz << " ";
    for (int k = sz; k <= n; k++)
        cout << k << " ";
    cout << "\n";
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