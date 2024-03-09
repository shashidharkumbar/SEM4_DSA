#include<stdio.h>
#include<stdlib.h>

int main() 
{
    int c1=0, c2=0;
    char ch1, ch2;
    FILE *fptr1;
    FILE *fptr2;

    fptr1 = fopen("text.txt", "r");
    fptr2 = fopen("text1.txt","r");

    if (fptr1 == NULL || fptr2 == NULL) 
    {
        printf("File not available.");
        exit(0);
    }

    while((ch1=fgetc(fptr1))!=EOF && (ch2=fgetc(fptr2))!=EOF)
    {
        if(ch1!=ch2)
        {
            printf("Files are not equal:");
            return 0;
        }
    }

    printf("Files are equal:");

    fclose(fptr1);
    fclose(fptr2);
    return 0;
}