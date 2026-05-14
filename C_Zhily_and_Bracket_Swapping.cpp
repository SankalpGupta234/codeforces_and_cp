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
        vector<char> a, b;

        for (int i = 0; i < n; i++)
        {
            char input;
            cin >> input;
            a.push_back(input);
        }
        for (int i = 0; i < n; i++)
        {
            char input;
            cin >> input;
            b.push_back(input);
        }

        if (a[0] != '(' || b[0] != '(')
        {
            cout << "NO" << '\n';
            continue;
        }

        if (a[n - 1] != ')' || b[n - 1] != ')')
        {
            cout << "NO" << '\n';
            continue;
        }

        int sum = 0;

        for (int i = 1; i < n - 1; i++)
        {
            sum += (a[i] == '(') ? 1 : -1;
            sum += (b[i] == '(') ? 1 : -1;
        }

        if (sum != 0)
        {
            cout << "NO" << '\n';
        }
        else 
        {
            cout << "YES" << '\n';
        }
            
    }

    return 0;
}


// (((())
// ())())