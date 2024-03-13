#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr, *fptr1, *fptr2;
    int num;

    // First
    fptr = fopen("Input1.txt", "r");
    if (fptr == NULL)
    {
        printf("File doesn't exist: ");
        return 0;
    }

    fptr1 = fopen("temp.txt", "w");

    while (fscanf(fptr, "%d", &num) == 1) 
    {
        fprintf(fptr1, "%d ", num); 
    }

    fclose(fptr);
    fclose(fptr1);

    // Second
    fptr1 = fopen("text.txt", "r");
    if (fptr1 == NULL) 
    {
        printf("File doesn't exist: ");
        return 0;
    }

    fptr2 = fopen("Input1.txt", "w");

    while (fscanf(fptr1, "%d", &num) == 1) 
    {
        fprintf(fptr2, "%d ", num); 
    }

    fclose(fptr1);
    fclose(fptr2);

    // Third
    fptr = fopen("temp.txt", "r");
    if (fptr == NULL)
    {
        printf("File doesn't exist: ");
        return 0;
    }

    fptr1 = fopen("text.txt", "w");

    while (fscanf(fptr, "%d", &num) == 1) 
    {
        fprintf(fptr1, "%d ", num); 
    }

    fclose(fptr);
    fclose(fptr1);

    printf("The data is successfully written to temp.txt.\n");

    return 0;
}
