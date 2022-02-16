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
    int res = 0;
    int arr1[n + 1];
    int arr2[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arr1[0] = 0;
    for (int i = 0; i < n; i++)
    {
        arr1[i + 1] = max(arr[i], arr1[i]);
    }
    arr2[n] = n + 1;
    for (int i = n - 1; i >= 0; i--)
    {
        arr2[i] = min(arr[i], arr2[i + 1]);
    }
    int cnt = 0, op = -1, opi = -1, mn;
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] < arr[i] && cnt == 0)
        {
            cnt++;
            op = arr[i];
            opi = i;
            mn = op;
        }
        op = max(op, arr[i]);
        mn = min(mn, arr[i]);
        if (arr[i] < arr2[i + 1] && cnt > 0 && op - mn == i - opi)
        {
            res++;
            cnt--;
        }
    }
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << arr1[i] << " ";
    // }
    // cout << "\n";
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << arr2[i] << " ";
    // }
    // cout << "\n";

    cout << res << "\n";
    // cout << "\n\n\n";
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