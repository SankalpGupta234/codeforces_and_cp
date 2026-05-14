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
    
    for (int CASE = 0; CASE < t; CASE++)
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

        vector<int> copy;

        for (auto i : v)
        {
            if (i % 6 == 0)
            {
                copy.push_back(i);
            }
        }

        for (auto i : v)
        {
            if (i % 2 == 0 && i % 3 != 0)
            {
                copy.push_back(i);
            }
        }

        for (auto i : v)
        {
            if (i % 2 != 0 && i % 3 != 0)
            {
                copy.push_back(i);
            }
        }

        for (auto i : v)
        {
            if (i % 3 == 0 && i % 2 != 0)
            {
                copy.push_back(i);
            }
        }

        for (auto i : copy)
        {
            cout << i << " ";
        }

        cout << '\n';
    }

    return 0;
}