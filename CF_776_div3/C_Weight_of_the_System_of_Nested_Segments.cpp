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
    ll n, m;
    cin >> n >> m;
    priority_queue<pair<ll, pair<ll, ll>>, vector<pair<ll, pair<ll, ll>>>> pq;
    for (ll i = 0; i < m; i++)
    {
        ll x, w;
        cin >> x >> w;
        pq.push({w, {x, i + 1}});
    }
    ll rem = m - 2 * n;
    while (rem--)
    {
        pq.pop();
    }
    vector<pair<ll, ll>> v;
    ll res = 0;
    while (!pq.empty())
    {
        pair<ll, pair<ll, ll>> p = pq.top();
        pq.pop();
        res += p.first;
        v.push_back({p.second.first, p.second.second});
    }
    sort(v.begin(), v.end());
    cout << res << "\n";
    for (ll i = 0; i < n; i++)
    {
        cout << v[i].second << " " << v[n * 2 - 1 - i].second << "\n";
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