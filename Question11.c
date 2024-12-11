// WAPT check whether the number is +ve, -ve or zero.

#include <stdio.h>
#include <conio.h>

int main()
{
    int n;

    printf("enter a number ");
    scanf("%d", &n);
    if (0 == n)
    {

        printf("number is zero");
    }
    else if (0 < n)
    {

        printf("number is positive");
    }
    else if (0 > n)
    {
        printf("number is negative");
    }
}