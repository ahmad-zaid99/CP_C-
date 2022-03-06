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
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int i = 1, j = n - 1;
    ll s1 = arr[0], s2 = 0;
    while (i < j)
    {
        s1 += arr[i];
        i++;
        s2 += arr[j];
        j--;
        if (s2 > s1)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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