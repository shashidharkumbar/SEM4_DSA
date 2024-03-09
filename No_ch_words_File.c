#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    char ch;
    int w=0,c=0;

    fptr=fopen("input1.txt","r");

    if(fptr==NULL)
    {
        printf("File don't Exist:");
        return 0;
    }

    while ((ch = getc(fptr)) != EOF) 
    {
        c++;

        if(ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            w++;
    }

    printf("No. of words: %d\n",w+1);
    printf("No. of character: %d\n",c);

    fclose(fptr);
}