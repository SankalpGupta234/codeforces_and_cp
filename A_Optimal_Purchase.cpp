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
        int n, a, b;
        cin >> n >> a >> b;

        switch (n % 3)
        {
            case 0: 
            {
                if (3 * a <= b)
                {
                    cout << n * a << '\n';
                }
                else 
                {
                    cout << n / 3 * b << '\n';
                }
                break;
            }
            case 1:
            {
                if (3 * a <= b)
                {
                    cout << n * a << '\n';
                }
                else if (b > a)
                {
                    cout << (n / 3) * b + a << '\n';
                }
                else
                {
                    cout << (n / 3) * b + b << '\n';
                }
                break;
            }
            case 2:
            {
                if (3 * a <= b)
                {
                    cout << n * a << '\n';
                }
                else if (b > 2 * a)
                {
                    cout << (n / 3) * b + 2 * a << '\n';
                }
                else
                {
                    cout << (n / 3) * b + b << '\n';
                }
                break;
            }
        }
    }

    return 0;
}