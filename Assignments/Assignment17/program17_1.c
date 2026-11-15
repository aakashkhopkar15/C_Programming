// Accept number of rows and columns from user and display bellow pattern
/*
    1   2   3   4
    5   6   7   8   
    9   1   2   3
    4   5   6   7
*/

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Accept number of rows and columns from user and display below pattern
//  Input        : Integer
//  Output       : string
//  Date         : 10/11/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int irow, int icol)
{
    int i =0, j = 0, icnt = 0;
    icnt = 1;

    for(i = 1; i <= irow; i++)
    {
        for(j = 1;j <= icol; j++, icnt++)
        {
            if(icnt > 9)
            {
                icnt = 1;
            }
                        
            printf("%d\t",icnt);
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
