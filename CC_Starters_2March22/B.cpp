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
    if (n == 2)
    {
        cout << "-1\n";
        return;
    }
    if (n % 2 == 1)
    {
        for (ll i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << "\n";
        return;
    }
    if (n > 4)
    {
        for (ll i = n; i >= 5; i--)
        {
            cout << i << " ";
        }
    }
    cout << "4 1 3 2\n";
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