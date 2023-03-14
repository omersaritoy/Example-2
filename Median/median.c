#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//in this question we try to find median of array
// for istance 5 2 4 5 6 8 input and output have to be 5

void bubblesort(int dizi[], int size);
float median(int dizi[], int size);

int main()
{
    srand(time(NULL));

    int dizi[1000];
    int size;
    printf("dizinin boyutunu girin:");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        dizi[i] = 1 + rand() % 100;
    }
    bubblesort(dizi, size);
    printf("dizinin medyanı=%.1f", median(dizi, size));

    return 0;
}
void bubblesort(int dizi[], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int temp;
            if (dizi[j+1] < dizi[j])
            {
                temp = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = temp;
            }
        }
    }
    for (int  i = 0; i < size; i++)
    {
        printf("%d.eleman:%d\n",i+1,dizi[i]);
    }
    
}

float median(int dizi[], int size)
{

    float medyan;
    if (size % 2 == 0)
        medyan = ((float)(dizi[(size / 2)] + dizi[(size / 2) - 1]) / 2);

    else
        medyan = dizi[(size / 2) ];

    return medyan;
}