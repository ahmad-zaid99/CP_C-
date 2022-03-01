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
    int pre[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
            pre[i] = arr[i];
        else
            pre[i] = max(pre[i - 1], arr[i]);
    }
    string S;
    cin >> S;
    int suf[n];
    suf[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = min(suf[i + 1], arr[i]);
    }
    int l = -1, r = n;
    int i = 0;
    int lN = 0, lS = 0, rN = 0, rS = 0;
    while (i < n - 1 && arr[i] <= suf[i + 1])
    {
        l = i;
        if (S[i] == 'N')
            lN++;
        else
            lS++;
        i++;
    }
    if (i < n - 1)
    {
        if (S[i] == 'N')
            lN++;
        else
            lS++;
    }
    if (i == n - 1)
    {
        cout << 0 << "\n";
        return;
    }
    i = n - 1;
    while (i > 0 && arr[i] >= pre[i - 1])
    {
        r = i;
        if (S[i] == 'N')
            rN++;
        else
            rS++;
        i--;
    }
    if (i > 0)
    {
        if (S[i] == 'N')
            rN++;
        else
            rS++;
    }
    if ((lN > 0 && rS > 0) || (lS > 0 && rN > 0))
    {
        cout << "1\n";
        return;
    }
    int north = 0, south = 0;
    for (i = 0; i < n; i++)
    {
        if (S[i] == 'N')
            north++;
        else
            south++;
    }
    if (north == 0 || south == 0)
    {
        cout << "-1\n";
        return;
    }
    cout << "2\n";
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