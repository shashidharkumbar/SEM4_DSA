#include<stdio.h>
#include<stdlib.h>

void readarray(int [], int);
void displayarray(int [], int);
int binarysearch(int [], int, int);

int main()
{
    int a[100];
    int n, key;
    int p;

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

    printf("\nEnter the key to be searched:");
    scanf("%d", &key);

    p = binarysearch(a, key, n);

    if(p == 1)
    {
        printf("The key is found");
    }
    else
    {
        printf("The key is not found");
    }

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

int binarysearch(int a[], int key, int n)
{
    int l = 0, u = n - 1;
    int mid;

    while(l <= u)
    {
        mid = (l + u) / 2;

        if(key == a[mid])
            return 1;
        else if(key < a[mid])
            u = mid - 1;
        else
            l = mid + 1;
    }

}
