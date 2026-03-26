#include <stdio.h>

void swap(char* x, char* y);

int main()
{
    char *x, *y;
    scanf("%s", x);
    for (int i = 0; i < 2; i++)
    {
        swap(x + i, x + 4 - i);  
    }
    printf("x: %s\n", x);
}

void swap(char* x, char* y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}
