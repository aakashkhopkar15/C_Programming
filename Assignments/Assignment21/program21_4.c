// Accept number of rows and columns and display below pattern
/*
    *   #   *   #
    *   #   *   #
    *   #   *   #
    *   #   *   #
*/

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Accept number of rows and columns from user and display below pattern
//  Input        : Integer
//  Output       : string
//  Date         : 11/11/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int irow, int icol)
{
    int i = 0, j = 0;

    for(i = 1; i <= irow; i++)
    {
        for(j = 1; j <= icol; j++)
        {
            if( j % 2 == 0)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }

        printf("\n\n");
    }
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0;

    printf("Enter number of rows and columns :\n");
    scanf("%d%d",&ivalue1,&ivalue2);

    Pattern(ivalue1, ivalue2);

    return EXIT_SUCCESS;
}