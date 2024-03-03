#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100
void read_votes(int arr[MAX],int N);
int compare_votes(int arr[MAX],int N);

int main()
{
    int N,m=0;
    int arr[MAX];
    int high;

    printf("Enter no. of parties:\n");
    scanf("%d",&N);

    if(N>0&&N<100)
    {
       read_votes(arr,N);
       high = compare_votes(arr,N);

       for(int i=0;i<N;i++)
       {
           if(high==arr[i])
                m=i;
       }
       printf("Winner is the party %d with maximum votes = %d",m+1,high);
    }
    else
        printf("Cannnot determine winner.");
    return 0;
}

void read_votes(int arr[MAX],int N)
{
    int i;
    printf("Enter the no. of votes of each parties:\n");
    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);
}

int compare_votes(int arr[MAX],int N)
{
    int high=0;
    for(int i=0;i<N;i++)
    {
        if(high<arr[i])
        {
            high=arr[i];
        }
    }
    return high;
}
