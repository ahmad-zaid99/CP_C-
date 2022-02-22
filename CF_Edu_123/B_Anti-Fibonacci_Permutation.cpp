#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void printarr(ll arr[], int n)
{
    for (int i = 0; i < n; i++)
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
    if (n == 3)
    {
        cout << "3 2 1\n3 1 2\n2 3 1\n";
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            arr[i] = n - i;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == 5)
            {
                swap(arr[i], arr[n - 2]);
                printarr(arr, n);
                swap(arr[i], arr[n - 2]);
            }
            else if (arr[i] == 3)
            {
                swap(arr[i], arr[n - 2]);
                printarr(arr, n);
                swap(arr[i], arr[n - 2]);
            }
            else
            {
                swap(arr[i], arr[n - 1]);
                printarr(arr, n);
                swap(arr[i], arr[n - 1]);
            }
        }
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