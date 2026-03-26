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
        int flag = 0;
        int n;
        cin >> n;

        int num;

        for (int j = 0; j < n; j++)
        {
            cin >> num;
            if (num == 67)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << "NO\n";
        }
        else 
        {
            cout << "YES\n";
        }
    }

    return 0;
}