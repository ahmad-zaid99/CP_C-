#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void printArr(ll arr[], ll st, ll en)
{
    for (ll i = st; i <= en; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void solve()
{
    ll l, r, a;
    cin >> l >> r >> a;
    ll q1, q2;
    q1 = l / a;
    q2 = r / a;
    if (q1 == q2)
    {
        ll res = q1 + (r % a);
        cout << res << "\n";
        return;
    }
    ll res = max(q2 + (r % a), q2 + a - 2);
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