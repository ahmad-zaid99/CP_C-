#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

struct subset
{
    int parent;
    int rank;
};

int find(vector<struct subset> &subsets, int i)
{
    // find root and make root as parent of i (path
    // compression)
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);

    return subsets[i].parent;
}
void Union(vector<struct subset> &subsets, int x, int y)
{
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);
    // Attach smaller rank tree under root of high rank tree
    // (Union by Rank)
    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;

    // If ranks are same, then make one as root and
    // increment its rank by one
    else
    {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

int helper(int i, int p1, int pn, vector<int> &dp, vector<struct subset> &dsu, set<int> &st, int parent, int n)
{
    if (i < 0 || i >= n)
        return 1000000;
    if (dp[i] != -1)
    {
        return dp[i];
    }
    int p = find(dsu, i);
    if (p == pn)
    {
        dp[i] = 0;
        return 0;
    }
    bool f = false;
    if (st.find(p) != st.end())
    {
        f = true;
    }
    else
    {
        st.insert(p);
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<struct subset> dsu(n);
    // struct subset dsu[n];
    for (int i = 0; i < n; i++)
    {
        dsu[i].parent = i;
        dsu[i].rank = 1;
    }
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        Union(dsu, x - 1, y - 1);
    }
    int p1 = find(dsu, 0);
    int pn = find(dsu, n - 1);
    if (p1 == pn)
    {
        cout << "0\n";
        return;
    }

    unordered_map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        int p = find(dsu, i);
        mp[p].push_back(i);
    }
    queue<int> q;
    set<int> st_d;
    st_d.insert(p1);
    int vis[n] = {0};
    for (auto &i : mp[p1])
    {
        vis[i] = 1;
        q.push(i);
    }
    int res = 0;
    while (!q.empty())
    {
        int sz = q.size();
        while (sz--)
        {
            int x = q.front();
            q.pop();
            int p = find(dsu, x);
            if (p == pn)
            {
                cout << res << "\n";
                return;
            }

            int l = x - 1;
            int g = x + 1;
            if (l >= 0)
            {
                int pl = find(dsu, l);
                if (st_d.find(pl) == st_d.end())
                {
                    st_d.insert(pl);
                    for (auto &i : mp[pl])
                    {
                        vis[i] = 1;
                        q.push(i);
                    }
                }
            }
            if (g < n)
            {
                int pg = find(dsu, g);
                if (st_d.find(pg) == st_d.end())
                {
                    st_d.insert(pg);
                    for (auto &i : mp[pg])
                    {
                        vis[i] = 1;
                        q.push(i);
                    }
                }
            }
        }
        res++;
    }

    // vector<int> a, b;
    // for (int i = 0; i < n; i++)
    // {
    //     int p = find(dsu, i);
    //     if (p == p1)
    //         a.push_back(i);
    //     else if (p == pn)
    //         b.push_back(i);
    // }

    // set<int> st;
    // st.insert(p1);
    // int sza = a.size();
    // int res=INT_MAX;
    // vector<int> dp(n,-1);
    // for(int i=0;i<sza;i++){
    //     res = min(res,helper(a[i],p1,pn,dp,dsu,st,1,n));
    //     res = min(res,helper(a[i],p1,pn,dp,dsu,st,0,n));
    // }
    // cout<<res<<"\n";
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