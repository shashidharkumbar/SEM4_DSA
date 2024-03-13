#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int size = 0;
    //char * arrr = "text.txt";
    fp = fopen("Input1.txt", "r");  //Put the file name to check the file size

    if (fp == NULL)
        printf("\nFile unable to open ");
    else
        printf("\nFile opened ");

    fseek(fp, 0, 2);   
    size = ftell(fp);   
    printf("The size of given file is : %d bytes\n", size);
    fclose(fp);

    return 0;
}