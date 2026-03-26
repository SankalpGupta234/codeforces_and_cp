#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Code below

    int t{};
    for (int i = 0; i < t; i++)
    {
        int n{}, k{};
        cin >> n >> k;

        int temp = n;

        for (int j = 0; j < k; j++)
        {
            if (temp % 2 == 0)
            {
                temp /= 2;
            } 
            else 
            {
                temp -= 1;
            }

            if (temp = 0)
        }
    }

    return 0;
}