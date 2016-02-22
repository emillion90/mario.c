/**
* pset 1
* mario.c
* Evan Million <million.evan@gmail.com>
**/
 
 
#include <cs50.h>
#include <stdio.h>
 
int main(void)
{
    int height = 1;
    do 
    {
        /**
        * Asks the user for input defining the height they want 
        * the pyramid to be. The if statement checks whether
        * height = 0, if so the code exits; if height = a negative 
        * integer or is over or equal to 24, it asks to try
        * again; and finally, if none of those conditions are met
        * it runs the original user query.
        **/
        
        if (height == 0)
        {
            break;
        }
        else if (height <= 0 || height >= 24)
        {
            printf("Retry:");
            height = GetInt();
        }
        else
        { 
            printf("How many blocks high should the pyramid be: ");
            height = GetInt();
        }      
    }
    // The code below will only compute if the user's input is 
    // a positive integer.
    while (height <= 0 || height >= 24); 
    
    /**
    *  Begin the for loop for the pyramid using the user's input
    *  the pyramid will be x number of rows defined by the 
    *  height variable. The for loop begins at 1
    *  since that is easiest for the user to understand.
    **/
     
    for (int rows = 1; rows <= height; rows++) 
    {
        /** 
        *  This for loop defines how many spaces there will be for each row.
        *  If there are four rows the first row would need 3 spaces, the 
        *  second would need 2 spaces and the third would need 1 space.
        *  (height-1) facilitates this by starting the loop at 1 less than the row
        *  and iterating 1 less space for every row.
        **/
        
        for (int spaces = 1; spaces <= (height - rows); spaces++)
        {
            printf(" ");
        }
        
        /** 
        * This for loop defines how many hashes there will be for each row.
        * If there are four rows the first row would have 2 hashes, the second
        * row would have 3 hashes, the third row would have 4 hashes and the 
        * fifth row would have 5 hashes. (rows+1) facilitates this by adding the 
        * ith number of hashes for every row itereated.
        **/
         
        for (int hashes = 1; hashes <= (rows + 1); hashes++)
        {
            printf("#");
        }
        
        // This final line of the loop starts a new line at the end of 
        // each iteration.
        printf("\n");
    }
    return 0;
}
