#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Code below

    int t{};
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int s{}, k{}, m{};
        cin >> s >> k >> m;

        int result{};

        if (s == k)
        {
            result = (m % s == 0) ? s : s - m % s;
        }
        else if (s < k)
        {
            result = s - (m % k);
            if (result < 0)
            {
                result = 0;
            }
        }
        else // s > k
        {
            result = ((m / k) % 2 == 0) ? s - (m % k) : k - (m % k);
        }

        cout << result << '\n';
    }

    return 0;
}