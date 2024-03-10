#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() 
{
    FILE *fptr;
    FILE *fptr1;
    char ch;

    fptr = fopen("Input1.txt", "r");
    fptr1 = fopen("text1.txt", "w");

    if (fptr == NULL) 
    {
        printf("File not found:");
        exit(0);
    }

    while ((ch = fgetc(fptr)) != EOF) 
    {
        if (islower(ch))
            ch = toupper(ch);

        fputc(ch, fptr1);
    }

    printf("Converted all to Uppercase:");
    fclose(fptr);
    fclose(fptr1);

    return 0;
}
