#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

vector<ll> v;
vector<ll> vec;

void fill(ll id, ll n, ll &num)
{
    if (id == n)
    {
        vec.push_back(num);
        return;
    }
    num += v[id];
    fill(id + 1, n, num);
    num -= v[id];
    fill(id + 1, n, num);
}

void printArr(ll arr[], ll st, ll en)
{
    for (ll i = st; i <= en; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void solve2(ll index, ll target, vector<ll> &ans, ll &res)
{
    if (target == 0 && index > 0)
    {
        res = min(res, (ll)ans.size());
        // res.push_back(ans);
        return;
    }
    if (index >= v.size())
        return;
    if (target < 0)
        return;

    ans.push_back(v[index]);
    solve2(index + 1, target - v[index], ans, res);
    ans.pop_back();
    // ll i;
    // for (i = index; i < v.size(); i++)
    // {
    //     if (v[i] != v[index])
    //     {
    //         break;
    //     }
    // }
    solve2(index + 1, target, ans, res);
}

ll combinationSum(ll target)
{

    vector<ll> ans;
    ll res = 99999999;
    solve2(0, target, ans, res);
    return res;
}

void solve()
{
    ll n;
    cin >> n;
    ll sz = vec.size();
    // cout << sz << "\n";
    ll res = 0;
    for (ll i = sz - 1; i >= 0; i--)
    {
        if (n >= vec[i])
        {
            n -= vec[i];
            res++;
            if (n == 0)
            {
                cout << res << "\n";
                return;
                        }
        }
    }
    if (n != 0)
    {
        cout << "-1\n";
        return;
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
    v.clear();
    ll p = 1;

    ll i = 1;
    p = 1;
    while (p <= 1000000000000)
    {
        p *= i;
        i++;
        v.push_back(p);
    }
    ll num = 0;
    ll n = v.size();
    fill(0, n, num);
    p = 1;
    while (p <= 1000000000000)
    {
        vec.push_back(p);
        p *= 2;
    }
    sort(vec.begin(), vec.end());
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}