#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int answer = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            int tmp = a[i];
            a[i] = b[i];
            b[i] = tmp;
        }
        answer += b[i];
    }
    int aMax = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > aMax)
        {
            aMax = a[i];
        }
    }
    answer += aMax;
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