#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    ll D;
    cin >> D;
    if (D % 2 == 1 || D > 2000000000)
    {
        cout << "-1\n";
    }
    else
    {
        D /= 2;
        cout << "0 " << D << "\n";
        cout << "0 " << D * -1 << "\n";
        cout << D << " 0\n";
        cout << D * -1 << " 0\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}