#include <bits/stdc++.h>
using namespace std;

// #define ll long long
// #define ld long double

// const ll MOD = 1e9 + 7;
// const ll INF = 1e9;
// const ld EPS = 1e-9;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        arr[i] = z;
    }
    int x = n + 1;

    while (x <= 10000000)
    {
        vector<int> a(n + 1, 0);
        int flag = 1;
        // memset(a, 0, sizeof(a));
        for (int i = 0; i < n && flag == 1; i++)
        {
            int y = arr[i] % x;
            if (y > n)
            {
                flag = 0;
            }
            else if (a[y] != 0)
            {
                flag = 0;
            }
            else
                a[y] = 1;
        }
        if (flag == 1)
        {
            cout << "YES " << x << "\n";
            return;
        }

        x = x + n + 1;
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