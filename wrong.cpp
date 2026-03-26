#include <iostream>

using namespace std;

int subtract(int n);

int main()
{
    int n{};
    int k{};
    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        n = subtract(n);
    }

    cout << n << '\n';
}

int subtract(int n)
{
    if (n % 10 == 0)
    {
        n = n / 10;
    }
    else
    {
        n = n - 1;
    }
    
    return n;
}