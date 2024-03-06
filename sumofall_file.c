#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int asciiToDecimal(char digit) 
{
    return digit - '0';
}

int main() {
    int count = 0, x=0;
    int arr[10], i=0,c;
    char ch;
    FILE *fptr;
    int sum=0;

    fptr = fopen("text.txt", "r");

    if (fptr == NULL) 
    {
        printf("File not available.");
        exit(0);
    }

    while ((ch = getc(fptr)) != EOF) 
    {
        if(ch==',')
        {
            i++;
        }
        else
        {
            ch=asciiToDecimal(ch);
            x=10*ch;
            ch = getc(fptr);
            ch=asciiToDecimal(ch);
            x=x+ch;
            arr[i]=x;
            count++;
            x=0;
        }
    }

    for(int j=0;j<count;j++)
    {
        sum=sum+arr[j];
    }

    printf("\nNumber of characters: %d\n", sum);

    fclose(fptr);

    return 0;
}