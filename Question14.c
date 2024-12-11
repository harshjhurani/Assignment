// WAPT find inputted year is ‘leap’ or ‘not’.
// leap year means a year is divisible by 4 and remainder is 0.
#include <stdio.h>
#include <conio.h>

int main()
{
    int y;

    printf("enter a year : ");
    scanf("%d", &y);
    if (y % 4 == 0)
    {
        if ((y % 400 == 0) || (y % 100 != 0))

            printf("%d its a leap year", y);
    }
    else
    {
        printf("%d its not a leap year", y);
    }
    getch();
}