// Accept number of rows and columns from user and display below pattern
/*
    1   2   3   4
    2   3   4   5
    3   4   5   6
    4   5   6   7
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int irow, int icol)
{
    int i = 0, j = 0;
    int icnt = 0;

    for(i = 1; i <= irow; i++)
    {
        icnt = i;

        for(j = 1; j <= icol; j++)
        {
           if(i != 1)
           {
            printf("%d\t",icnt);
            icnt++;
           }
           else
           {
            printf("%d\t",j);
           }
        }

        printf("\n\n");
    }
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0;

    printf("Enter number of rows and columns : \n");
    scanf("%d%d",&ivalue1,&ivalue2);

    Pattern(ivalue1, ivalue2);

    return EXIT_SUCCESS;
}