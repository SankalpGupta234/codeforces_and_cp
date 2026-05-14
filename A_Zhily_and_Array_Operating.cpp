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
        int n;
        cin >> n;
        int count = 0;

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            v.push_back(input);
        }

        for (int i = n - 1; i > 0; i--)
        {
            if (v[i] > 0)
            {
                v[i - 1] += v[i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                count++;
            }
        }

        cout << count << '\n';
    }

    return 0;
}