#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    
    do {
        printf ("Height: ");
        height = GetInt();
    }
    while ((height < 0) || (height > 23));
    
    // part two below
    

    
    for (int row = 1; row <= height; row++) {
        for (int space = (height - row); space > 0; space--) {
            printf (" ");
        }
        for (int c = 1; c <= (row+1); c++) {
            printf ("#");
        }
        
        printf ("\n");
    }
    
    return 0;
}