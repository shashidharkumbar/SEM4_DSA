#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    
    fptr=fopen("text.txt","w");

    for(int i=0;i<10;i++)
    {
        fprintf(fptr,"%d,",rand()%9+1);
    }

    fclose(fptr);

    return 0;
}