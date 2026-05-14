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

        int count1 = 0, count2 = 0;

        for (int i = 0; i < n; i++)
        {
            char ch;
            cin >> ch;
            if (ch == '(')
            {
                count1++;
            }
            else 
            {
                count2++;
            }
        }

        if (count1 == count2)
        {
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}