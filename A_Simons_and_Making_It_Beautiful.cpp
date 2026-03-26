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
        int n, max_i = 0;
        cin >> n;

        vector<int> p;

        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            p.push_back(input);

            if (input == n)
            {
                max_i = i;
            }
        }

        int uFirst = 0, prefix_sum = 0;

        int c = 1;

        while (uFirst == 0)
        {
            

            prefix_sum += p[c - 1];
            
            if(prefix_sum == c*(c + 1) / 2)
            {
                uFirst = c;
            }

            c++;

            if (c > n)
            {
                break;
            }
        }

        if (uFirst < n)
        {
            int temp;
            temp = p[0];
            p[0] = p[max_i];
            p[max_i] = temp;
        }

        for (int i = 0; i < n; i++)
        {
            cout << p[i] << ' ';
        }

        cout << '\n';
    }

    return 0;
}


vector<int> getPrimeFactors(int n) 
{
        vector<int> primeFactors;

        // Divide by 2 till odd
        while (n % 2 == 0) {
            primeFactors.push_back(2);
            while (n % 2 == 0)
                n /= 2;
        }

        // Check odd numbers from 3 to sqrt(n)
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                primeFactors.push_back(i);
                while (n % i == 0)
                    n /= i;
            }
        }

        // If remaining n is a prime number
        if (n > 1)
            primeFactors.push_back(n);

        return primeFactors;
    }