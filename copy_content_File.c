#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    FILE *fptr1;
    char ch;

    fptr=fopen("Input1.txt","r");
    fptr1=fopen("text1.txt","w");

    if(fptr==NULL && fptr1==NULL)
    {
        printf("File don't exist: ");
        return 0;
    }

    ch=getc(fptr);
    while(ch!=EOF)
    {
        fputc(ch,fptr1);

        ch=getc(fptr);
    }
    printf("Successfully copied:");

    fclose(fptr);
    fclose(fptr1);
}