// Accept number of rows and columns from user and display below pattern
/*
    A   A   A   A   A
    B   B   B   B   B
    C   C   C   C   C
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

#include <stdio.h>
#include <stdlib.h>

void Pattern(int irow, int icol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for (i = 1, ch = 'A'; i <= irow; i++, ch++)
    {
        for (j = 1; j <= icol; j++)
        {
            printf("%c\t", ch);
        }
        printf("\n\n");
    }
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0;

    printf("Enter number of rows and columns : \n");
    scanf("%d%d", &ivalue1, &ivalue2);

    Pattern(ivalue1, ivalue2);

    return EXIT_SUCCESS;
}