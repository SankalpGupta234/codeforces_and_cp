#include <bits/stdc++.h>

using namespace std;

int solve(int n, string s);

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

        string s;
        cin >> s;

        if (solve(n, s) == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}

int solve(int n, string s)
{
    if (n == 0)
    {
        return 1;
    }

    if (n == 2 && s[0] == s[1])
    {
        return 1;
    }

    if (n == 1 || (n == 2 && s[0] != s[1]))
    {
        return 0;
    }

    int i, a, b;

    for (i = 1; i < n; i++)
    {
        if (i % 2 == 1 && s[i] == s[0])
        {
            a = solve(i - 1, s.substr(1, i - 1));

            if (a == 1)
            {
                break;
            }
        }

        if (i == n - 1)
        {
            return 0;
        }
    }

    b = solve(n - i - 1, s.substr(i + 1, n - i - 1));
    
    return (a && b);
}