// Accept character from user and check whether it is alphabet or not

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: ChkDigit
//  Description  : Accept character from user and check whether it is alphabet or not
//  Input        : String
//  Output       : string
//  Date         : 17/11/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if((ch >= '0' && ch <= '9'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cvalue = '\0';
    BOOL bret = FALSE;

    printf("Enter character : \n");
    scanf("%c",&cvalue);

    bret = ChkDigit(cvalue);

    if(bret == TRUE)
    {
        printf("It is digit chracter\n");
    }
    else
    {
        printf("It is not digit character\n");
    }

    return EXIT_SUCCESS;
}