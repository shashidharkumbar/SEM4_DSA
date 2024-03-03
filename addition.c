#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void add(int n, float a[n], float b[n]);

int main()
{
    int n,i;

    printf("Enter n:\n");
    scanf("%d",&n);

    float a[20],b[20];
    if(n>0)
    {
        printf("Enter the elements of a:\n");
        for(i=0;i<n;i++)
        {
           scanf("%f",&a[i]);
        }
        printf("Enter the elements of b:\n");
        for(i=0;i<n;i++)
        {
           scanf("%f",&b[i]);
        }
        add(n,a,b);
    }
    else
    {
        printf("Rows should be more than 0.");
    }
    return 0;
}
void add(int n, float a[20], float b[20])
{
  float sum[20];
  int i;
  printf("Sum of the arrays:\n");
    for(i=0;i<n;i++)
    {
        sum[i]=a[i]+b[i];
        printf("%0.1f\t",sum[i]);
    }

}
