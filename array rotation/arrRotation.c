// C program to rotate an array by
// d elements
#include <stdio.h>

/* Function to left Rotate arr[] of size n by 1*/
void leftRotatebyOne(int arr[], int n);

/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n)
{
    int i;
    for (i = 0; i < d; i++)
        leftRotatebyOne(arr, n);
}

void leftRotatebyOne(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[i] = temp;
}

/* utility function to print an array */
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++){
        printf("\t%d ", arr[i]);
    }
    printf("\n");

}

/* Driver program to test above functions */
int main()
{
    int  d;
    ///int arr[];
////////
   int arr[100],  c, n;

   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &arr[c]);
////////
    /**printf("Insert number of elements to the array: ");
    scanf("%d",&n);
    printf("Insert elements: ");
    scanf("%d",&arr[]);**/
    printf("Insert how many elements to rotate: ");
    scanf("%d",&d);
    leftRotate(arr, d, n);
    printf("\nRotated elements: \n");
    printArray(arr, n);
    return 0;
}
