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

    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;

        vector<int> v;

        int max_i = 0;
        int max = 0;

        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            v.push_back(input);

            if (input > max)
            {
                max = input;
                max_i = i;
            }
        }

        int counter = 0;

        if (max_i > n / 2)
        {
            counter += n - max_i - 1;
        }
        else 
        {
            counter += max_i;
        }
        

        cout << counter << '\n';
    }

    return 0;
}