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
    bool flag = false;
    ll arr[n];
    ll res = 0;
    ll sm = 0;
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];

        if (i > 0 && i < n - 1)
        {
            res += (arr[i] + 1) / 2;
            sm += arr[i];
            if (arr[i] >= 2)
                flag = true;
        }
    }
    if (n == 3 && arr[1] % 2 == 1)
        cout << "-1\n";
    else if (sm > n - 2 && flag)
        cout << res << "\n";
    else
        cout << "-1\n";
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