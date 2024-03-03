#include <stdio.h>
#define N 9

void read_array(int element[N], int n);
void display_array(int element[N], int n);
int highest_number(int element[N], int n);

int main()
{
    int n, element[N], max;

    printf("Enter n:\n");
    scanf("%d",&n);

    if(n>0)
    {
      read_array(element,n);
      display_array(element,n);
      max=highest_number(element,n);
      printf("\n\nHighest number in array is %d.\n",max);
    }
    else
    {
        printf("Array cannot be less than 0.");
    }
    return 0;

}

void read_array(int element[N], int n)
{
    int i;
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&element[i]);
    }
}

void display_array(int element[N], int n)
{
    int i;
    printf("The array Elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",element[i]);
    }



}
int highest_number(int element[N], int n)
{
    int max=0,i;
    for(i=0;i<n;i++)
    {
        if(max<element[i])
        {
            max=element[i];
        }
    }
    return max;
}
