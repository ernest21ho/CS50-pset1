#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    int minutes;
    int bottles;
    
    printf("minutes: ");
    
    minutes = GetInt();
    
    bottles = (192 * minutes) / 16;
    
    printf("bottles: %i\n", bottles);

    
    return 0;
}