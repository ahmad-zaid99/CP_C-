#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

// pair<ll, ll> maximumSubarraySum(ll arr[], ll n)
// {
//     ll maxSum = INT_MIN;
//     ll currSum = 0;
//     ll i = 0, j = -1, l = 0;
//     for (; i <= n - 1; i++)
//     {
//         currSum += arr[i];

//         if (currSum > maxSum)
//         {
//             maxSum = currSum;
//             l = max(l, i - j);
//         }

//         if (currSum < 0)
//         {
//             currSum = 0;
//             j = i;
//         }
//     }
//     return {maxSum, l};
// }

void solve()
{
    ll n, x;
    cin >> n >> x;
    ll arr[n];
    // ll mxarr = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll pre[n];
    pre[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + arr[i];
    }
    ll sublen[n + 1] = {0};
    for (ll sz = 1; sz <= n; sz++)
    {
        sublen[sz] = INT_MIN;
        for (int l = 0; l + sz <= n; l++)
        {
            int h = l + sz - 1;
            if (l == 0)
                sublen[sz] = max(sublen[sz], pre[h]);
            else
                sublen[sz] = max(sublen[sz], pre[h] - pre[l - 1]);
        }
    }
    for (int sz = n - 1; sz >= 0; sz--)
    {
        sublen[sz] = max(sublen[sz], sublen[sz + 1]);
    }
    ll mx = sublen[0];
    ll le = 0;
    cout << sublen[0] << " ";
    for (int i = 1; i <= n; i++)
    {
        sublen[i] += x * i;
        sublen[i] = max(sublen[i], sublen[i - 1]);
        cout << sublen[i] << " ";
    }
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