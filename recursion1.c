// Including necessary libraries
#include <stdio.h>
#include <stdlib.h>

// Defining helper functions
int get_int(char *);

// Starting main function
int main(int args, char **argc)
{
    // Declaring necessary variables
    int *array, i, j, arrlen = 0; 

    // Checking if the user provided the array in command line argument
    if (args > 1)
    {
        arrlen = args - 1;
        array = (int*) malloc(sizeof(int) * arrlen);
        for (i = 1, j = 0; i < arrlen + 1; i++, j++)
        {
            array[j] = atoi(argc[i]);
        }
    }

    // Else asking if the user want the array to be predefined if they just wanna test the program with an hardcoded array

    // Getting input of the array size

    // Allocating size of the array

    // Getting input of the array

    // Using our sort function we defined which will sort the array using recursion

    // Printing out the resultant array 
    printf("Resultant array:\n");
    for (int i = 0; i < arrlen; i++)
    {
        printf("%i\n", array[i]);
    }

    // Freeing allocated memory
    if (arrlen != 0)
    {
        free(array);
    }

    else
    {
        printf("No array provided!\n");
        return 1;
    }

    // Returning the main function with 0 if the program successfully worked
    return 0;
}