#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    FILE *fptr1;
    FILE *fptr2;
    char ch;

    fptr=fopen("Input1.txt","r");
    fptr1=fopen("text.txt","r");
    fptr2=fopen("text1.txt","w");

    if(fptr==NULL && fptr1==NULL)
    {
        printf("File don't exist: ");
        return 0;
    }

    while((ch=fgetc(fptr))!=EOF)
        fputc(ch,fptr2);

    fputc('\n',fptr2);

    while((ch=fgetc(fptr1))!=EOF)
        fputc(ch,fptr2);

    printf("Successfully merged:");

    fclose(fptr);
    fclose(fptr1);
    fclose(fptr2);
}