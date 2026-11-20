
///////////////////////////////////////////////////////////////////
//
//  Function Name   : ChkDigit
//  Input           : Character 
//  Description     : Accept Character and check it is special symbol or not(!,@,#,$,%,^,&,*)
//  Date            : 19/11/2026
//  Author          : Aakash Prakash Khopkar
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if(ch=='!' || ch =='@' || ch =='#' || ch =='$' || ch =='%' || ch =='^' || ch =='&' || ch =='*') 
    {
       
        return TRUE;
    }
    return FALSE;
}

int main()
{
    char cValue;

    BOOL bRet = FALSE;

   
    printf("Enter Character\n");
    scanf(" %c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("it is Special Character\n");
    }
    else
    {
        printf("it is Not a Special Character \n");
    }

    return EXIT_SUCCESS;
}