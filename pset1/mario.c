#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int height;
    //int hashes = 2;
    do
    {
        printf("How big would you like Mario's pyramid to be? ");
        height = GetInt();
    }
    while (height < 0 || height > 23);
    for (int row = 0; row < height; row++)
    {
        //printf("%i", row);
        for (int spaces = 0; spaces < height - row - 1; spaces++)
        {
            printf(" ");
        }
        for (int hashes = 0; hashes <= row + 1; hashes++)
        //printf("%i", hashes);
        {
            printf("#");
        }
        printf("\n");
    }

    
}