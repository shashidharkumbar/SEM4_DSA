#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100

void read(int arr[MAX],int N);
void display(int arr[MAX],int N);
int tallest(int arr[MAX],int N);
int tall_num(int arr[MAX],int N,int tall);

int main()
{
    int arr[MAX],N,tall,blown;

    printf("Enter age of the frd:\n");
    scanf("%d",&N);
    if(N>0)
    {
        read(arr,N);
        display(arr,N);
        tall=tallest(arr,N);
        printf("\nTallest Candle = %d\n",tall);
        blown=tall_num(arr,N,tall);
        printf("Tallest Candles blown = %d\n",blown);

    }
    else
        printf("Invalid input.");

    return 0;
}
void read(int arr[MAX],int N)
{
    int i;
    printf("Enter height of candles..\n");
    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);
}
void display(int arr[MAX],int N)
{
    int i;
    for(i=0;i<N;i++)
        printf("%d ",arr[i]);
}
int tallest(int arr[MAX],int N)
{
    int i;
    int max=0;
    for(i=0;i<N;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    return max;
}
int tall_num(int arr[MAX],int N,int tall)
{
    int count=0,i;
    for(i=0;i<N;i++)
    {
        if(tall==arr[i])
            count++;
    }
    return count;

}
