// Accept number of rows and columns from user and display below pattern
/*
    A   B   C   D
    a   b   c   d
    A   B   C   D
    a   b   c   d

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
    int i = 0, j =0;
    char ch1 = '\0', ch2 = '\0';

    for(i = 1; i <= irow; i++)
    {
        for(j = 1, ch1 = 'A', ch2 = 'a'; j <=icol; j++, ch1++, ch2++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",ch1);
            }       
            else
            {
                printf("%c\t",ch2);
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