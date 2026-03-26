#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n{};
    cin >> n;

    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    sort(x.begin(), x.end());

    int q{};

    cin >> q;

    int m{};

    for (int i = 0; i < q; i++)
    {
        cin >> m;
        int index{};
        index = binsearch(x, m);
        cout << index << '\n';
    }
    
}