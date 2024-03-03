#include<stdio.h>
#include<stdlib.h>

void readarray(int [], int);
void displayarray(int [], int);
void bubblesort(int [], int, int);

int main()
{
    int a[100];
    int n, k;

    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    if(n <= 0 || n > 100)
    {
        printf("Invalid data\n");
        exit(0);
    }

    printf("Enter the array elements: \n");
    readarray(a, n);

    printf("\nThe array elements are: \n");
    displayarray(a, n);

    printf("Enter k: ");
    scanf("%d", &k);

    bubblesort(a, n, k);

    printf("\nThe sorted array is : \n");
    displayarray(a, n);

    return 0;
}

void readarray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void displayarray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

void bubblesort(int a[], int n, int k)
{
    int temp;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1] && j != k)
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
