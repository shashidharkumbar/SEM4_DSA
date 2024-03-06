#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int asciiToDecimal(char digit) 
{
    return digit - '0';
}

int main() {
    int count = 0, x=0;
    int arr[10], i=0,c=99999;
    char ch;
    int key;
    FILE *fptr;
    int sum=0;

    printf("Enter the key to be searched in File: ");
    scanf("%d",&key);
    
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
        if(key==arr[j])
        {
            printf("Key is found:");
            exit(0);
        }

    }

    printf("Key not found");

    fclose(fptr);

    return 0;
}