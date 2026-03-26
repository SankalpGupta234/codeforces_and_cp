#include <bits/stdc++.h>

using namespace std;

vector<int> getPrimeFactors(int n);

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
        int n, k = 1;
        cin >> n;

        vector<int> v = getPrimeFactors(n);

        for (int i = 0; i < v.size(); i++)
        {
            k *= v[i];
        }

        cout << k << '\n';
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