#include <stdio.h>

#define LEN 10

int count(int v[], int i);
int condition(long long n);

int main()
{
    long long n = 1000000000;

    while (!(condition(n)))
    {
        n++;

        if (n % 100000 == 0)
        {
            printf("n = %lld, still working\n", n);
        }
    }

    printf("%lld\n", n);
}

int condition(long long n)
{
    int v[LEN];
    while (n > 0)
    {
        int i = 0;
        v[i++] = n % 10;
        n /= 10;
    }

    int flag = 1;

    for (int i = 0; i < LEN; i++)
    {
        if (count(v, i) != v[i])
        {
            flag = 0;
        }
    }

    return flag;
}

int count(int v[], int i)
{
    int counter = 0;

    for (int j = 0; j < LEN; j++)
    {
        if (v[j] == i)
        {
            counter++;
        }
    }

    return counter;
}