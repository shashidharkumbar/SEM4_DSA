#include<stdio.h>
#include<stdlib.h>
int main()
{
        char name[50];
        int marks,i,n;
        printf("Enter number of students: ");
        scanf("%d",&n);
        FILE *fptr;
        fptr=(fopen("text.txt","w"));
        if(fptr==NULL) 
        {
                printf("File Not Found..!");
                exit(1);
        }

        for (i=0;i<n;++i) 
        {
                printf("\nFor student%d\nEnter name: ",i+1);
                scanf("%s",name);
                printf("Enter marks: ");
                scanf("%d",&marks);
                fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
        }
        printf("\nThe Details of the students is successfully written:");
        fclose(fptr);
        return 0;
}