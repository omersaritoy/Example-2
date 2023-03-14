#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Array_Write(int row, int column, int array[row][column]);
void result(int row, int column, int big, int small, int array[row][column]);

int main()
{
    srand(time(NULL));

    int row;
    int column;

    printf("enter the line value of the array:");
    scanf("%d", &row);

    printf("enter the column value of the array:");
    scanf("%d", &column);

    int array[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            array[i][j] = 1+rand() % 9;
        }
    }

    int big, small;

    printf("Please enter the big value:");
    scanf("%d", &big);

    printf("Please enter the small value:");
    scanf("%d", &small);

    Array_Write(row, column, array);
    printf("\n--------------------------------\n");
    result(row,column,big,small,array);

    return 0;
}
void Array_Write(int row, int column, int array[row][column])
{
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < column; j++)
        {
            printf("%d  ", array[i][j]);
        }
        printf("\n");
    }
}
void result(int row, int column, int big, int small, int array[row][column])
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (small <= array[i][j] && array[i][j] <= big)
                printf("x  ");
            else if (array[i][j] < small)
                printf("*  ");
            else if (array[i][j] > big)
                printf("-  ");

        }
        printf("\n");
    }
}
