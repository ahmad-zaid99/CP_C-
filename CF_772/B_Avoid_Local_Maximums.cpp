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
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<ll> m;
    vector<ll> v;
    for (ll i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            m.push_back(i);
    }
    if (m.size() == 0)
    {
        cout << "0\n";
        for (ll i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    else
    {
        ll q = m.size();
        // stack<ll> st;
        bool f = false;
        v.push_back(m[0]);
        for (ll x = 1; x < q; x++)
        {
            if (!f && m[x] - m[x - 1] == 2)
            {
                f = true;
                v.pop_back();
                v.push_back(m[x] - 1);
            }
            else
            {
                f = false;
                v.push_back(m[x]);
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            ll mx = max(arr[v[i] - 1], arr[v[i] + 1]);
            arr[v[i]] = mx;
        }
        cout << v.size() << "\n";
        for (ll i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
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