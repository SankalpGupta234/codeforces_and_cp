#include <bits/stdc++.h>

using namespace std;

#define int long long

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
        int n, s, x, sum = 0;
        cin >> n >> s >> x;

        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            sum += input;
        }

        if (sum > s)
        {
            cout << "NO" << '\n';
            continue;
        }

        if ((s - sum) % x == 0)
        {
            cout << "YES" << '\n';
        }
        else 
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}