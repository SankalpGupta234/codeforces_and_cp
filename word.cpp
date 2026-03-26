#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s{};
    cin >> s;

    int i = 0;
    int capital = 0;

    for (char c : s)
    {
        if (c >= 'A' and c <= 'Z')
        {
            capital++;
            i++;
        }
        else 
        {
            i++;
        }
    }

    int j = 0;

    if (capital <= i - capital)
    {
        for (char c : s)
        {
            if (c >= 'A' and c <= 'Z')
            {
                s[j] += 32;
            }
            j++;
        }
    }
    else 
    {
        for (char c : s)
        {
            if (c >= 'a' and c <= 'z')
            {
                s[j] -= 32;
            }
            j++;
        }
    }

    cout << s;
}

