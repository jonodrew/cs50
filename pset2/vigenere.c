#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// accept some string (key)
// verify if alphabet characters; if not, exit
// accept some string (plaintext)
// if p character is not a letter:
// print it and increment k index by 0, p index by 1
// if p character is a letter
// add corresponding value and increment k index by 1, p index by 1
// if between 65 and 90, subtract 65
// if between 97 and 122, subtract 97
// 

int main(int argc, char* argv[])
{
    
    if (argc != 2) 
    {
        printf("You've done something wrong. Please restart this program and enter a string of characters on the command line.\n");
        return 1;
    }
    for (int a = 0; a < strlen(argv[1]);a++)
    {
        if (isalpha(argv[1][a])==false)
        {
            printf("Please only use alphabetical characters for this program. Restart and try again.\n");
            return 1;
        }
    }
    
    string p = GetString();
    int j = 0;
    for (int i = 0; i < strlen(p); i++)
    {
        if (j == strlen(argv[1]))
        {
            j = 0;
        }
        char k = argv[1][j];
        if (k >= 'A' && k <= 'Z')
        {
            k = k - 'A';
        }
        else
        {
            k = k - 'a';
        }
        if (p[i] < 'A')
        {
            printf("%c", p[i]);
        }
        else if ((p[i] < '[' && p[i] + k > '[') || (p[i] >= 'a' && p[i] + k > 'z'))
        {
            printf("%c", p[i] + k - 26);
            j++;
        }
        else
        {
            printf("%c", p[i] + k);
            j++;
        }
        
    }

    printf("\n");
}