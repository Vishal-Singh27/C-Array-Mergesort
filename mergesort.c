// Including necessary libraries
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Defining helper functions
int get_int(char *);
void intmergesort(int *arr);
void floatmergesort(float *arr);

// Starting main function
int main(int args, char **argc)
{
    // Declaring necessary variables
    int *array, i, j, arrlen = 0, choice = 0;

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
    else
    {
        do
        {
            printf("Choose between the given options: \n");
            choice = get_int("1: Enter the array \n2: Use hardcoded array for testing\n3: Exit the program\nAnswer: ");

            if (choice != 1 && choice != 2 && choice != 3)
            {
                printf("\nPlease Choose among given choice!\n\n");
            }
        } 
        while (choice != 1 && choice != 2 && choice != 3);
    
        // If user chooses hardcoded array
        if (choice == 1)
        {
            // First getting the input of the array size
            do
            {
                arrlen = get_int("Enter how many numbers you wanna sort(Enter 0 to exit the program): ");
                if (arrlen < 0)
                {
                    printf("\nThe no. of you wanna sort must be greater than 0! (Enter 0 to exit the program)\n\n");
                }

                else if (arrlen == 0)
                {
                    printf("Exiting program...\n");
                    return 0;
                }
            }
            while (arrlen < 1);

            // Now allocating the size for our array
            array = (int *)malloc(sizeof(int) * arrlen);

            // Getting input of the array
            for (i = 0; i < arrlen; i++)
            {
                array[i] = get_int("Enter a number: ");
            }
        }

        // Else if the user chooses 2
        else if (choice == 2)
        {
            arrlen = 10; // Setting the length of the array
            array = (int *)malloc(sizeof(int) * arrlen);
            srand(time(NULL)); // Seeding the rand function to have different random numbers each time
            for (i = 0; i < arrlen; i++)
            {
                array[i] = rand() % 30; // Using our rand function and getting the remainder when divided by 30 so the max no. we get is 29
            }
        }

        // Else if the user chooses 3
        else if (choice == 3)
        {
            printf("Exiting program...\n");
            return 0;
        }

        // Else there must be an unexpected unknown error and exits with 2
        else
        {
            printf("Unknown error! contact the developer!!\n");
            printf("Exiting program...\n");
            return 2;
        }
    }

    // Using our sort function we defined which will sort the array using recursion
    intmergesort(array);

    // Printing out the resultant array 
    printf("Sorted array:\n");
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

// Our helper function that helps in getting input of an integer
int get_int(char *str)
{
    int num;
    printf("%s", str);
    scanf("%i", &num);
    return num;
}

// Our helper function that does the main merge sort on integers
void intmergesort(int *arr)
{
    return;
}

// Our helper function that does the main merge sort on float numbers
void floatmergesort(float *arr)
{
    return;
}