#include "stdio.h"

int main()
{
    int iSize;
    scanf("%d", &iSize);

    int arr[iSize][iSize];

    for(int i = 0 ; i < iSize; i++)
        arr[i][i] = i;

    for(int i = 0; i < iSize; i++)
        printf("%d\t", arr[i][i]);

    printf("\n");

    return 0;
}