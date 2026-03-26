#include <iostream>

using namespace std;

int main()
{
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t{};
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int k{}, x{};
        cin >> k >> x;
        cout << k * x + 1 << '\n';
    }

}