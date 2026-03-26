#include <iostream>
#include <vector>

using namespace std;

void solve(int n, int l, int r, int k, vector <long long> &v);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t{};
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n{}, q{};
        cin >> n >> q;
        vector <long long> v(n);

        // prefix sum vector
        for (int j = 0; j < n; j++)
        {
            int num_j{};
            cin >> num_j;
            v[j] = (j == 0) ? (long long) num_j : (v[j - 1] + (long long) num_j);
        }

        // solve for each query
        for (int j = 0; j < q; j++)
        {
            int l{}, r{}, k{};
            cin >> l >> r >> k;

            solve(n, l, r, k, v);
        }

    }
}

void solve(int n, int l, int r, int k, vector <long long> &v)
{
    long long sum{};

    if (l == 1)
    {
        sum = v[n - 1] - v[r - 1] + (long long) k * (r - l + 1);
    }
    else
    {
        sum = v[n - 1] - (v[r - 1] - v[l - 2]) + (long long) k * (r - l + 1);
    }

    // print result
    if (sum % 2 == 1)
    {
        cout << "YES" << '\n';
    }
    else 
    {
        cout << "NO" << '\n';
    }
}