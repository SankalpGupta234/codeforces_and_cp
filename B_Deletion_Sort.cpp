#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Code below

    int t;
    cin >> t;

    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            v.push_back(input);
        }

        int ans = n;

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                ans = 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}