// WAPT check whether inputted character is vowel or consonants.
// Vowels are a,e,i,o,u
// consonants are remainder alphabets
#include <stdio.h>
#include <conio.h>
int main()
{
    char ch, a, e, i, o, u;

    printf("enter any character : ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("character is vowel");
    }
    else
    {
        printf("character is consonant");
    }
    getch();
}
