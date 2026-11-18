// Accept number from user and display below pattern
/*
    Input : 4
    Output : #    1   *   #   2   *   #   3   *   #   4   *
*/
//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Accept number of rows and columns from user and display below pattern
//  Input        : Integer
//  Output       : string
//  Date         : 12/11/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

void Pattern(int ino)
{
    int icnt = 0;

    for (icnt = 1; icnt <= ino; icnt++)
    {
        printf("#\t%d\t*\t", icnt);
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &ivalue);

    Pattern(ivalue);

    return EXIT_SUCCESS;
}