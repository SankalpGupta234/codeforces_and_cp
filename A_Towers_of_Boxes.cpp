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
        int n, m, d;
        cin >> n >> m >> d;

        int h = (d / m) + 1;

        int ans = (n % h == 0) ? n / h : n / h + 1;
        
        cout << ans << '\n';
    }

    return 0;
}