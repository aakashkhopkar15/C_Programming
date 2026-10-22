// Identify character type
//////////////////////////////////////////////////////////
//
//  Function Name: CheckChracterType
//  Description  : Determine the greatest no amongst them.
//  Input        : Integer, Integer, Integer
//  Output       : Integer 
//  Date         : 20/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckChracterType( char cvalue)
{
    if(cvalue >= 'A' && cvalue <= 'Z')
    {
        printf("Uppercase Alphabet\n");
    }
    else if(cvalue >= 'a' && cvalue <= 'z')
    {
        printf("Lowercase Alphabet\n");
    }
    else if(cvalue >= '0' && cvalue <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Charcter\n");
    }
}

int main()
{
    char cvalue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cvalue);

    CheckChracterType(cvalue);

    return EXIT_SUCCESS;
}