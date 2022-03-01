#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    ll n, x;
    cin >> n >> x;
    ll arr[n];
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    sort(arr, arr + n);
    ll res = n;
    for (int i = 0; i < n; i++)
    {
        // if (arr[i] % x == 0)
        // {
        //     ll d = arr[i] / x;
        //     if (mp.find(arr[i]) != mp.end() && mp.find(d) != mp.end())
        //     {
        //         mp[arr[i]]--;
        //         if (mp[arr[i]] == 0)
        //             mp.erase(arr[i]);
        //         mp[d]--;
        //         if (mp[d] == 0)
        //             mp.erase(d);
        //     }
        // }
        ll m = arr[i] * x;
        if (mp[arr[i]] > 0 && mp[m] > 0)
        {
            ll mn = min(mp[arr[i]], mp[m]);
            mp[arr[i]] = mp[arr[i]] - mn;
            mp[m] = mp[m] - mn;
            res = res - 2 * mn;
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