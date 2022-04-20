#include <stdio.h>

void meow(int n);

void main()
{
    meow(4); 
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}