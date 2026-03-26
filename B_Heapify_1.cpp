#include <bits/stdc++.h>

using namespace std;

int pow_2(int num);
int check(int a, int b);

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
        int n;
        cin >> n;

        vector<int> v;
        
        for (int j = 0; j < n; j++)
        {
            int input;
            cin >> input;
            v.push_back(input);
        }

        int flag = 1;

        for (int j = 1; j <= n/2; j++)
        {
            int a = v[j - 1];
            int b = v[2 * j - 1];

            if (a > b)
            {
                if (check(a, b) == 0)
                {
                    flag = 0;
                }
            }
            else
            {
                if (check(b, a) == 0)
                {
                    flag = 0;
                }
            }
        }

        for (int j = n/2; j < n; j++)
        {
            if (j % 2 == 0 && v[j] != j + 1)
            {
                flag = 0;
            }
        }

        if (flag == 1)
        {
            cout << "YES\n";
        }
        else 
        {
            cout << "NO\n";
        }
    }


    return 0;
}

int pow_2(int num)
{
    int rem = 0;
    while (num != 1)
    {
        rem += num % 2;
        num /= 2;
    }

    return rem;
}

int check(int a, int b)
{
    if ((a % b == 0 && pow_2(a / b) == 0))
    {
        return 1;
    }
    
    return 0;
}