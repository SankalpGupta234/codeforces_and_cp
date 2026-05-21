#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> min;
    vector<int> max;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1]) 
        {
            if (i < n - 1 && v[i + 1] < v[i])
            {
                cout << "NO" << '\n';
                return;
            }
            else 
            {
                min.push_back(v[i - 1] - v[i]);
                if (i < n - 1) max.push_back(v[i + 1] - v[i]);
            }
        }
    }

    int m = min.size();
    
    if (m == 0)
    {
        cout << "YES" << '\n';
        return;
    }

    int maxofmin = min[0];
    int minofmax = max[0];
    
    for (int i = 0; i < m; i++)
    {
        if (min[i] > maxofmin)
        {
            maxofmin = min[i];
        }
        if (max[i] < minofmax)
        {
            minofmax = max[i];
        }
    }

    if (maxofmin < minofmax)
    {
        cout << "YES" << '\n';
    }
    else 
    {
        cout << "NO" << '\n';
    }
    return;
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