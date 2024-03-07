#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    char name[100]="Shashidhar is in sem 4";

    fptr=fopen("Input1.txt","w");

    if(fptr==NULL)
    {
        printf("File Not Exist: ");
        exit(0);
    }

    fprintf(fptr,"%s", name);

    fclose(fptr);
}