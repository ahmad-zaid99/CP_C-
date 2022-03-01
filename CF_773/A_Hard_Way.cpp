#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

struct point
{
    int x;
    int y;
};

void solve()
{
    vector<struct point> p(3);
    // vector<struct point> xsort(3);
    // vector<struct point> ysort(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> p[i].x >> p[i].y;
    }
    int ly = 0, lx = 0, hx = 0, hy = 0;
    int res = 0;
    int ymin = p[0].y, xmin = p[0].x, xmax = p[0].x, ymax = p[0].y;
    for (int i = 1; i < 3; i++)
    {
        if (p[i].y < ymin)
        {
            ly = i;
            ymin = p[i].y;
        }
        if (p[i].y > ymax)
        {
            hy = i;
            ymax = p[i].y;
        }
        if (p[i].x < xmin)
        {
            lx = i;
            xmin = p[i].x;
        }
        if (p[i].x > xmax)
        {
            hx = i;
            xmax = p[i].x;
        }
    }
    if (p[0].y == p[1].y && p[0].y > ymin)
    {
        res = abs(p[0].x - p[1].x);
    }
    if (p[2].y == p[1].y && p[2].y > ymin)
    {
        res = abs(p[2].x - p[1].x);
    }
    if (p[0].y == p[2].y && p[0].y > ymin)
    {
        res = abs(p[0].x - p[2].x);
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
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}