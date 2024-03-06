#include<stdio.h>
#include<stdlib.h>

int main() {
    int count = 0;
    char ch;
    FILE *fptr;

    fptr = fopen("text.txt", "r");

    if (fptr == NULL) 
    {
        printf("File not available.");
        exit(0);
    }

    while ((ch = getc(fptr)) != EOF) 
    {
        printf("%c", ch);

        if(ch==',')
            printf("\n");
        count++;
    }

    printf("\nNumber of characters: %d\n", count);

    fclose(fptr);  

    return 0;
}
