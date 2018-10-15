//Write a program to read and display n numbers using an array.
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, arr[20];

    printf("\n Enter the number of elements for the array : ");
    scanf("%d", &n);
    printf("\nInsert elements for the integer array:\n");
    for(i=0;i<n;i++)
    {
        printf("\n arr[%d] = ", i);
        scanf("%d",&arr[i]);
    }
    printf("\nThe array elements are: \n");
    for(i=0;i<n;i++)
    {
         printf("\t %d\n", arr[i]);
    }

return 0;
}
