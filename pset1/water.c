#include<stdio.h>
#include<cs50.h>

int main(void)
{
    printf("How long, in minutes, is your average shower? ");
    int minutes;
    minutes = GetInt();
    if (minutes < 1)
    {
        printf("I'm sorry, I need a positive integer ");
        minutes = GetInt();
    }
    // we're going to use imperial? Really? I mean, you know who else uses imperial?
    // Libya and Myanmar. That's it. 
    // I'm writing code on a computer thousands of miles away and I'm doing it in imperial.
    // The irony
    int bottles = (minutes * 192) / 16;
    printf("Holy moly, that's %i bottles of water!\n", bottles);
    
}