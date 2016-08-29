#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// accept some number
// number modulo 26 gives number to move along
// prompt for input
// if character is a space, print it
// if new character ascii is greater than 'Z' && less than 'a', - 26
// ditto if greater than 'z'

int main(int argc, char* argv[])
{
    if (argc != 2) 
    {
        printf("You did not enter a numerical key! Please restart this program.");
        return 1;
    }
    int k = atoi(argv[1]);
    k = k % 26;
    string text = GetString();
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] < 'A')
        {
            printf("%c", text[i]);
        }
        else if ((text[i] + k) > 'z' || (text[i] > 'Z' && text[i] < 'a'))
        {
            printf("%c", text[i] + k - 26);
        }
        else
        {
            printf("%c", text[i] + k);
        }
    }
    printf("\n");
}