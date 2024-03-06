#include<stdio.h>
#include<stdlib.h>

#define ROW 10
#define COL 10

void readmatrix(int [][COL], int, int);
void displaymatrix(int [][COL], int, int);
void mulmat(int [][COL], int [][COL], int [][COL], int, int, int);

int main()
{
    int a[ROW][COL];
    int b[ROW][COL];
    int y[ROW][COL];
    int r1, c1, r2, c2;

    printf("Enter the order of matrix A: ");
    scanf("%d%d",&r1,&c1);

    printf("Enter the matrix A elements: \n");
    readmatrix(a, r1, c1);

    printf("Enter the order of matrix B: ");
    scanf("%d%d",&r2,&c2);

    printf("Enter the matrix B elements: \n");
    readmatrix(b, r2, c2);

    printf("The matrix A elements are: \n");
    displaymatrix(a, r1, c1);

    printf("The matrix B elements are: \n");
    displaymatrix(b, r2, c2);

    if(c1!=r2)
    {
        printf("The Multiplication cannot be performed..!");
        exit(0);
    }

    mulmat(a,b,y,r1,c1,c2);

    printf("The Multiplication of matrix A & B is: \n");
    displaymatrix(y, r2, c2);
}

void mulmat(int a[][COL], int b[][COL], int y[][COL], int r1, int c1, int c2)
{
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            y[i][j]=0;
            for (int k=0;k<c1;k++)
            {
                y[i][j]= y[i][j]+ a[i][k]*b[k][j];
            }
        }
    }
}

void displaymatrix(int a[][COL], int r, int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
}
void readmatrix(int a[][COL], int r, int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}


