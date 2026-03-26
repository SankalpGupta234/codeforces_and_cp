#include <bits/stdc++.h>

using namespace std;

int solve(int x, int y);

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
        int x, y, flag;
        cin >> x >> y;

        flag = solve(x, y);

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

int solve(int x, int y)
{
    int bTimes3, c_min;
    // a: (2, 1) b: (3, 0) c: (4, -1)

    c_min = (y > 0) ? 0 : -y;
    
    bTimes3 = x - 2*y - 6*c_min;

    if (bTimes3 >= 0 && bTimes3 % 3 == 0)
    {
        return 1;
    }

    return 0;
}