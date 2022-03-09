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
    string str;
    getline(cin, str);
    ll n, d;
    cin >> n >> d;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll di = arr[0] - 1;
    ll d2;
    ll a = -1, b = 0;
    ll cnt = 1;
    map<ll, pair<ll, ll>> mp;
    for (ll i = 1; i < n; i++)
    {
        ll dis = arr[i] - arr[i - 1];
        if (dis == di)
        {
            cnt++;
        }
        else if (dis < di)
        {
            cnt = 1;
            d2 = di;
            di = dis;
            a = i - 1;
            b = i;
        }
    }
    if (cnt > 1)
    {
        cout << d << "\n";
        return;
    }
    ll st = 0;
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i != a)
        {
            ll ed = arr[i];
            ll dif = ed - st - 1;
            dif = (dif - 1) / 2;
            mx = max(mx, dif);
            st = ed;
        }
    }
    // if (a == n - 1)
    // {
    //     mx
    // }
    // if (arr[n - 1] != d)
    // {
    //     mx = max()
    // }
    st = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i != b)
        {
            ll ed = arr[i];
            ll dif = ed - st - 1;
            dif = (dif - 1) / 2;
            mx = max(mx, dif);
            st = ed;
        }
    }
    ll res = min(d2, mx);
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