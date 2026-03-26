#include <bits/stdc++.h>

using namespace std;

int sum(vector<int> v, int n);

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
        int x, n = 0;
        cin >> x;
        vector<int> digits;

        while (x > 0)
        {
            int digit = x % 10;
            digits.push_back(digit);
            x /= 10;
            n++;
        }

        int dig_sum = sum(digits, n);
        int max = max_sum()
        
    }

    return 0;
}

int sum(vector<int> v, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
       sum += v[i]; 
    }

    return sum;
}