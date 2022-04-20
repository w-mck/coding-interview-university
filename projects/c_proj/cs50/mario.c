#include <stdio.h>

void pyramid(int h);

int main(void)
{
    pyramid(7);
}

void pyramid(int h)
{
    for (int i = 0; i <= h; i++)
    { 
        for (int j = h; j > i; j--)
        {
            printf(" ");  
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");    
    }
}