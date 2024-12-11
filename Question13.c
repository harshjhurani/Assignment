/*/WAPT read a cost price, selling price of an item, program to determine whether the seller
has been made profit or loss./*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int cp, sp;
    printf("enter a cost price of product : ");
    scanf("%d", &cp);
    printf("enter a selling price of product : ");
    scanf("%d", &sp);

    if (cp < sp)
    {
        printf("seller has been made profit");
    }
    else
    {
        printf("seller has been made loss");
    }
    getch();
}
