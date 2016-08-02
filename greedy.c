#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {
    
    double change;
    int coins = 0;
    
    double quarters = 25;
    double dimes = 10;
    double nickels = 5;
    double pennies = 1;
    
    do {
    printf("Amount of change: ");
    change = GetFloat();
    }
    while (change < 0);
    
    int amount =  round(change * 100); //IMPORTANT: Will help against the imprecision
    
    
    
    // while quarters can be used
    while (quarters <= amount) {
        amount -= quarters;
        coins += 1;
    }
    
    while (dimes <= amount) {
        amount -= dimes;
        coins += 1;
    }
    
    while (nickels <= amount) {
        amount -= nickels;
        coins += 1;
    }
    
    while (pennies <= amount) {
        amount -= pennies;
        coins += 1;
    }
    
    printf ("%i\n", coins);
    
    
    
    
}