#include<stdio.h>
#include<stdlib.h>

void readarray(int [], int);
void displayarray(int [], int);
void sumarray(int [], int [], int [], int);

int main()
{
    int a[100], b[100], c[100];
    int n;

    printf("Enter the number of elements: \n");
    scanf("%d",&n);

    printf("Enter the array A elements: \n");
    readarray(a, n);

    printf("Enter the array B elements: \n");
    readarray(b, n);

    sumarray(a, b, c, n);

    printf("The sum of the two array is \n");
    displayarray(c, n);
}

void readarray(int a[], int n)
{
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
}

void displayarray(int a[], int n)
{
    for(int i=0;i<n;i++)
        printf("%d  ",a[i]);
}

void sumarray(int a[], int b[], int c[], int n)
{
    for(int i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }

}
