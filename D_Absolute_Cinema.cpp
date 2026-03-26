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

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        vector<long long> f;

        for (int j = 0; j < n; j++)
        {
            long long input;
            cin >> input;

            f.push_back(input);
        }

        vector<long long> a(n);

        long long a_sum;
        a_sum = (f[0] + f[n - 1]) / (n - 1);

        a[0] = ((f[1] - f[0]) + a_sum) / 2;

        for (int j = 1; j < n - 1; j++)
        {
            a[j] = (f[j + 1] + f[j - 1] - 2 * f[j]) / 2;
        }

        a[n - 1] = a_sum;

        for (int j = 0; j < n - 1; j++)
        {
            a[n - 1] -= a[j];
        }

        for (int j = 0; j < n; j++)
        {
            cout << a[j] << " ";
        }

        cout << '\n';
    }


    return 0;
}