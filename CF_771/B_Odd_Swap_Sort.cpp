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
    int odd = -1, even = -1;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            if (arr[i] < even)
                flag = false;
            even = max(even, arr[i]);
        }
        else
        {
            if (arr[i] < odd)
                flag = false;
            odd = max(odd, arr[i]);
        }
    }
    if (flag)
        cout << "Yes\n";
    else
        cout << "No\n";

    // int arr[n], arr2[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    //     arr2[i] = arr[i];
    // }
    // sort(arr2, arr2 + n);
    // int odd = 0, even = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] != arr2[i])
    //     {
    //         if (arr[i] % 2 == 0)
    //             even++;
    //         else
    //             odd++;
    //     }
    // }
    // if (even == 0 && odd != 0)
    // {
    //     cout << "No\n";
    // }
    // else if (even != 0 && odd == 0)
    // {
    //     cout << "No\n";
    // }
    // else if ((abs(even - odd)) % 2 == 0)
    // {
    //     cout << "Yes\n";
    // }
    // else
    // {
    //     cout << "No\n";
    // }
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
