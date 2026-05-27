#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{
    int n, d;
    cin >> n >> d;
    vector<int> src(n - 1);
    vector<int> dest(n - 1);
    
    for (int i = 0; i < n - 1; i++)
    {
        cin >> src[i] >> dest[i];
    }

    
}

signed main()
{
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Code below
    int t;
    cin >> t;
    
    for (int CASE = 0; CASE < t; CASE++)
    {
        solve();
    }

    return 0;
}