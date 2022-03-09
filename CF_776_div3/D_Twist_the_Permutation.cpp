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
    ll n;
    cin >> n;
    ll arr[n];
    ll res[n] = {0};
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll cnt = 0;
    ll j = n - 1;
    ll num = n;
    while (num > 1)
    {
        ll m = num;
        while (num == m)
        {
            if (arr[j] == num)
            {
                res[num - 1] = (num - cnt) % num;
                cnt = 0;
                num--;
            }
            else
            {
                if (arr[j] < num)
                {
                    cnt++;
                }
                j--;
                j = (j + n) % n;
            }
        }
    }
    printArr(res, 0, n - 1);
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