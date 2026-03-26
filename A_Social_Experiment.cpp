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
        if (n == 2)
        {
            cout << 2;
        }
        else if (n == 3)
        {
            cout << 3;
        }
        else if (n % 2 == 0)
        {
            cout << 0;
        }
        else 
        {
            cout << 1;
        }

        cout << '\n';
    }


    return 0;
}