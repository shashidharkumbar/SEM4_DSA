#include<stdio.h>
#include<stdlib.h>

void bubblesort1(int *, int);
void bubblesort2(int *, int);

int main()
{
    FILE *fptr;
    int num;
    int arr[100];
    int k = 0;
    char a[100]="Ascending Order: ";
    char d[100]="Descending Order: ";

    fptr = fopen("text.txt", "w");
    if (fptr == NULL)
    {
        printf("Unable to open file.\n");
        exit(0);
    }

    for (int i = 0; i < 10; i++)
    {
        fprintf(fptr, "%d ", rand() % 50 + 1);
    }

    fclose(fptr);

    fptr = fopen("text.txt", "r");

    if (fptr == NULL)
    {
        printf("Unable to open file for reading.\n");
        exit(0);
    }

    //rewind(fptr);

    while (fscanf(fptr, "%d", &num) == 1)
    {
        arr[k] = num;
        k++;
    }

    fclose(fptr);

    bubblesort1(arr,10);
    fptr=fopen("text.txt","a");
    fprintf(fptr, "\n");
    fprintf(fptr, "%s", a);

    for(int i=0;i<10;i++)
    {
        fprintf(fptr, "%d ",arr[i]);
    }

    fclose(fptr);

    bubblesort2(arr,10);
    fptr=fopen("text.txt","a");
    fprintf(fptr, "\n");
    fprintf(fptr, "%s", d); //fputs("Ascending Order : ", fptr);
    for(int i=0;i<10;i++)
    {
        fprintf(fptr, "%d ",arr[i]);
    }

    printf("The Elements are perfectly Sorted n again Stored in File Successfully");
    return 0;
}

void bubblesort1(int a[], int n)
{
    int temp=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void bubblesort2(int a[], int n)
{
    int temp=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

