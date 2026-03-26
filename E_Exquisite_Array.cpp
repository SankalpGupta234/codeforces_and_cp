#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Code below

    int t{};
    for (int i = 0; i < t; i++)
    {
        int n{};
        cin >> n;

        vector<int> v(n);

        for (int j = 0; j < n; j++)
        {
            int jth{};
            cin >> jth;

            v[j] = (j == 0) ? 0 : abs(v[j - 1] - jth);
        }

        for (int k = 1; k <= n - 1; k++)
        {
            
        }

    }

    return 0;
}