#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define int long long

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int answer = 0;

    for (int i = 0; i < n; i++)
    {
        signed curr = v[i];
        signed next = (i == n - 1) ? 0 : v[i + 1];

        answer += max(curr - next, 0);
    }

    cout << answer << '\n';


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