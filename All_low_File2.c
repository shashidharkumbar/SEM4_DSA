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
        if (isupper(ch))
            ch = tolower(ch);

        fputc(ch, fptr1);
    }

    printf("Converted all to Lowercase:");
    fclose(fptr);
    fclose(fptr1);

    return 0;
}
