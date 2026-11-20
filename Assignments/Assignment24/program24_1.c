// Write a program which accept string from user and accept one character. Check whether the character is present in string or not
/*
    Marvellous Multi OS
    e
    TRUE

    Marvellous Multi OS
    W
    FALSE
*/

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: ChkChar
//  Description  : program which accept string from user and accept one character
//  Input        : String
//  Output       : string
//  Date         : 15/11/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{
    int icnt = 0;
    while(str[icnt] != '\0')
    {
        if(str[icnt] == ch)
        {
            return true;
        }
    
        icnt++;
    }

    return false;
}

int main()
{
    char arr[20];
    char cvalue = '\0';
    bool bret = false;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter character : \n");
    scanf(" %c",&cvalue);

    bret = ChkChar(arr, cvalue);

    if(bret == true)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return EXIT_SUCCESS;
}
