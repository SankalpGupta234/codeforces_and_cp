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
        int n, count = 0;
        cin >> n;

        int prev; int curr;
        cin >> curr;

        for (int j = 0; j < n - 1; j++)
        {
            prev = curr;
            cin >> curr;

            if (prev + curr == 7 || prev == curr)
            {
                count++;
                curr = 42;
            }
        }

        cout << count << '\n';
    }


    return 0;
}