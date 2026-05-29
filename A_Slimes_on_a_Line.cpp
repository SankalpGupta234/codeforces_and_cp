#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int min = v[0], max = v[0];

    for (int i = 0; i < n; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
        if (v[i] < min)
        {
            min = v[i];
        }
    }

    cout << (max - min + 1) / 2 << '\n';

    return;
}

signed main()
{
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Loop
    int t;
    cin >> t;
    
    while (t--)
    {
        solve();
    }

    return 0;
}