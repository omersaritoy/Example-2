
//this code try to find second the biggest number 
//for istance 4 2 3 6 4 5 9 
//it have to output 6
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define SIZE 10

void Find(int array[], int size);
void Print(int array[], int size);

int main()
{
    srand(time(NULL));
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        array[i] = 1 + rand() % 10000;
    }
    Print(array, SIZE);
    Find(array, SIZE);

    return 0;
}
void Print(int array[], int size)
{
    puts("Elements of Array:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
void Find(int array[], int size)
{
    int max1 = array[0], max2 = array[1];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max1)
        {
            max2 = max1;
            max1 = array[i];
        }
        else if (array[i] > max2)
            max2 = array[i];
    }
    printf("\nThe biggest second number=%d", max2);
}
