#include<stdio.h>
#include<cs50.h>
#include <string.h>

int main(int argc, char* argv[])
{
    //string name;
    //printf("What's your name? ");
    string name = GetString();
    int nameLength = strlen(name);
    if (name != NULL)
    {
        for (int i = 0; i < nameLength; i++)
        {
            if (name[i] != ' ' && (name[i-1] == ' ' || i == 0) )
            {
                if(name[i] >= 'a' && name[i] <= 'z')
                {
                    printf("%c", name[i] - ('a' - 'A'));
                }
                
                else
                {
                    printf("%c", name[i]);
                }
            }
        }
        printf("\n");
    }
}
