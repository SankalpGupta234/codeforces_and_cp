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

    if (is_sorted(v.begin(), v.end(), [](int a, int b) {return a >= b;})) cout << "NO\n";
    else cout << "YES\n";

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