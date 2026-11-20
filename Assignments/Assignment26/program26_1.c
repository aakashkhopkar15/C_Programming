// Accept character from user and check whether it is alphabet or not

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: ChkAlpha
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

BOOL ChkAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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

    bret = ChkAlpha(cvalue);

    if(bret == TRUE)
    {
        printf("It is chracter\n");
    }
    else
    {
        printf("It is not character\n");
    }

    return EXIT_SUCCESS;
}
