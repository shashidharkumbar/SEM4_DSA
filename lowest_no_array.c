#include<stdio.h>
#define L 100

void read_array(int p[L], int n);
void display_array(int p[L], int n);
void lowest_number(int p[L],int n);

int main()
{
    int p[L], n;

    printf("Enter n:\n");
    scanf("%d",&n);
    if(n>0)
    {
        read_array(p,n);
        display_array(p,n);
        lowest_number(p,n);
    }
    else
        printf("Array should not be less than 0.\n");
}

void read_array(int p[L],int n)
{
    int i;
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
}

void display_array(int p[L], int n)
{
    int i;
    printf("The array Elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",p[i]);

    }
}

void lowest_number(int p[L],int n)
{
    int min=999999;
    int i;
    for(i=0;i<n;i++)
    {
        if(min>p[i])
        {
            min=p[i];


        }


    }
    printf("\n");

     printf("Lowest number in array is %d.\n",min);
}
