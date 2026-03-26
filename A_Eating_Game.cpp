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
        int v_max = 0;

        for (int i = 0; i < n; i++)
        {
            int input; 
            cin >> input;
            v.push_back(input);

            if (input > v_max)
            {
                v_max = input;
            }
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == v_max)
            {
                count++;
            }
        }

        cout << count << '\n';
    }

    return 0;
}