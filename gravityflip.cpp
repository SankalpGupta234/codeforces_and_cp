#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n{};
    cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }
    
    sort(heights.begin(), heights.end());
    
    for (int k = 0; k < n; k++)
    {
        cout << heights[k] << ' ';
    }

    cout << '\n';
}