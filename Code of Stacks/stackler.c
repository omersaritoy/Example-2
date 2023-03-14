#include <stdio.h>
#include <stdlib.h>
int *array;
int size = 2;
int top = 0;

int pop()
{

    return array[--top];
}

void push(int a)
{
    if (top >= size)
    {
        int *array2 = (int *)malloc(sizeof(int) * size * 2);
        for (int i = 0; i < size; i++)
        {
            array2[i] = array[i];
        }
        array = array2;
        size *= 2;
    }

    array[top++] = a;
}
void print()
{
    for (int i = 0; i < top; i++)
    {
        printf("%d ", array[i]);
    }
}
int main()
{
    array = (int *)malloc(sizeof(int) * 2);
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    print();
    printf("popped %d", pop());

    return 0;
}