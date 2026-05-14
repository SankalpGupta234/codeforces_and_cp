#include <bits/stdc++.h>

using namespace std;

//#define int long long

int maxInd(int *v, int n)
{
    int max_i = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > v[max_i])
        {
            max_i = i;
        }
    }

    return max_i;
}

void reverse(int *arr, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

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

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            v.push_back(input);
        }

        int i = 0;

        while(true)
        {
            if (v[i] == n - i)
            {
                i++;
            }
            else if (i == n - 1)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << v[j] << ' ';
                }
                cout << '\n';

                break;
            }
            else
            {
                int max_i = maxInd(&v[i], n - i);
                reverse(&v[i], max_i - i + 1);
                
                for (int j = 0; j < n; j++)
                {
                    cout << v[j] << ' ';
                }
                cout << '\n';

                break;
            }
        }
               
    }

    return 0;
}