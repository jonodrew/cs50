#include<stdio.h>
#include<cs50.h>
#include<math.h>

//Get float
    //Convert to cents ( * by 100)
    //Loop:
        //Divide by largest number
        //cents - result * largest number
        //goback to 8 with next largest number

int main(void)

{
    float change;
    int cents = 0;
    int coins = 0;
    int divisor = 0;
    do
    {
        printf("How much change is owed? ");
        change = GetFloat();
    }
    while (change < 0);
    cents = round(change * 100);
    //printf("cents: %i\n", cents);
    do
    {
        divisor = cents / 25;
        if (divisor >= 1)
        {
            cents = cents - (divisor * 25);
            //printf("There are %i cents left\n", cents);
            coins = coins + divisor;
            //printf("There are %i coins to return\n", coins);
        }
        divisor = cents / 10;
        if (divisor >= 1)
        {
            cents = cents - (divisor * 10);
            //printf("There are %i cents left\n", cents);
            coins = coins + divisor;
            //printf("There are %i coins to return\n", coins);
        }
        divisor = cents / 5;
        if (divisor >= 1)
        {
            cents = cents - (divisor * 5);
            //printf("%i", cents);
            coins = coins + divisor;
            //printf("%i", coins);
        }
        divisor = cents / 1;
        if (divisor >= 1)
        {
            cents = cents - (divisor * 1);
            //printf("%i", cents);
            coins = coins + divisor;
            //printf("%i", coins);
        }
    }
    while (cents > 0);
    printf("%i\n", coins);
    
}