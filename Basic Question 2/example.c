#include <stdio.h>
#include <stdlib.h>

int main()
{

    int yils, boss, satir;
    char k1, k2;
    printf("Satır ve karakterleri giriniz:");
    scanf("%d %c %c", &satir, &k1, &k2);

    yils = 1;
    boss = satir - 1;

    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < boss; j++)
            printf("%c", k1);
        for (int k = 0; k < yils; k++)
            printf("%c", k2);
        for (int l = 0; l < boss; l++)
            printf("%c", k1);
        printf("\n");

        boss--;
        yils += 2;
    }
    yils -= 4;
    boss = 1;

    for (int i = 0; i < satir - 1; i++)
    {
        for (int j = 0; j < boss; j++)
            printf("%c", k1);
        for (int k = 0; k < yils; k++)
            printf("%c", k2);
        for (int l = 0; l < boss; l++)
            printf("%c", k1);
        printf("\n");
        boss++;
        yils -= 2;
    }

    return 0;
}
