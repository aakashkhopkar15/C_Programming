///////////////////////////////////////////////////////////////////
//
//  Function Name   : ChkVowel
//  Input           : Character 
//  Description     : Check Vowels
//  Date            : 19/11/2026
//  Author          : Aakash Prakash Khopkar
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u') 
        {
        
            return TRUE;
        }
        *str++;
    }
    return FALSE;
}

int main()
{
    char arr[20];

    BOOL bRet = FALSE;

   
    printf("Enter Character\n");
    scanf(" %c",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowels\n");
    }
    else
    {
        printf("No Vowels \n");
    }

    return EXIT_SUCCESS;
}