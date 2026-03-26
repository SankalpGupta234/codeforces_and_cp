#include <iostream>

using namespace std;

int main()
{
    int k{};
    int n{};
    int w{};

    cin >> k >> n >> w;

    int cost = w * (w + 1) * k / 2;

    cout << ((n > cost) ? 0 : cost - n) << '\n';
}