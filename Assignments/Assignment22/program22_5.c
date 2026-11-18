// Accept number from user and display below pattern
/*
    Input : 8
    Output : 2   4    6    8    10   12   14   16
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
        printf("%d\t", icnt * 2);
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