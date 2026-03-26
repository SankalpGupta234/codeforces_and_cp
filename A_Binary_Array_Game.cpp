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
        int n{};
        cin >> n;
        vector<int> v(n);
        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
        }

        if (v[0] == 1 || v[n - 1] == 1)
        {
            cout << "Alice\n";
        }
        else 
        {
            cout << "Bob\n";
        }
    }

    return 0;
}