#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> points;

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
            else if (i < n - 1 && v[i + 1] < v[i - 1])
            {
                points.push_back(i);
                points.push_back(i + 1);
            }
            else 
            {
                points.push_back(i);
            }
        }
    }

    int m = points.size();

    if (m == 0)
    {
        cout << "YES" << '\n';
        return;
    }
    
    for (int i = 0; i < m; i++)
    {
        int diff = v[points[i] - 1] - v[points[i]];

        for (int j = 0; j < m; j++)
        {
            if (diff > 0) v[points[j]] += diff;
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (v[points[i]] > v[points[i] + 1])
        {
            cout << "NO" << '\n';
            return;
        }
    }

    cout << "YES" << '\n';
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