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
        int mex_sum = 0;
        int max_sum = 0;
        int max = 0;

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            v.push_back(input);

            if (input > max)
            {
                max = input;
            }
        }

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[j] == i)
                {
                    a[i]++;
                }
            }
        }

        int absent = n;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                absent = i;
                break;
            }
        }

        mex_sum = (absent * (absent + 1)) / 2 + (n - absent) * absent;

        max_sum = (absent * (absent - 1)) / 2 + (n - absent) * max;

        cout << mex_sum + max_sum << '\n';
    }

    return 0;
}