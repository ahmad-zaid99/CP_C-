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
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int j = -1, k = -1;
    int mn = INT_MAX, mind;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
            mind = i;
        }
        if (arr[i] > mn)
        {
            j = i;
            k = mind;
        }
    }
    // cout << arr[k];
    if (j != -1)
    {
        while (j < k)
        {
            int x = arr[j];
            arr[j] = arr[k];
            arr[k] = x;
            j++;
            k--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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
