
///////////////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Input           : Character 
//  Description     : if character is Capital then display all character till Z; if it is small then Display in reverse order till a; other case return directly
//  Date            : 19/11/2026
//  Author          : Aakash Prakash Khopkar
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    if(ch >='A' && ch<='Z')
    {
        for(int iCnt = ch; iCnt<='Z'; iCnt++,ch++)
        {
            printf("%c",ch);
        }
    }
    else if(ch >='a' && ch<='z')
    {
        for(int iCnt = ch; iCnt>='a'; iCnt--,ch--)
        {
            printf("%c",ch);
        }
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';
   
    printf("Enter Character\n");
    scanf("%c",&cValue);

    Display(cValue);

    
    return EXIT_SUCCESS;
}