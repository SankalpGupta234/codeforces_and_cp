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

        string s;
        cin >> s;

        int flag = solve(s, n);

        if (flag == 1)
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

int solve(string s, int n)
{
    
}