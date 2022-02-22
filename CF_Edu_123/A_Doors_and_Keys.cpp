#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    // ll n;
    // cin >> n;
    // ll arr[n];
    // for (ll i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    string s;
    cin >> s;
    bool flag = true;
    bool r[3] = {false, false, false};
    for (int i = 0; i < 6; i++)
    {
        char c = s[i];
        if (c == 'r')
            r[0] = true;
        else if (c == 'g')
            r[1] = true;
        else if (c == 'b')
            r[2] = true;
        else if (c == 'R')
        {
            if (r[0] == false)
                flag = false;
        }
        else if (c == 'G')
        {
            if (r[1] == false)
                flag = false;
        }
        else if (c == 'B')
        {
            if (r[2] == false)
                flag = false;
        }
    }
    if (flag)
        cout << "YES\n";
    else
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