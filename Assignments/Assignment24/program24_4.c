// Write a program which accept string from user and accept one character.Return index of last occurence of that character
/*
    Marvellous Multi OS
    M
    11

    Marvellous Multi OS
    W
    -1

    Marvellous Multi OS
    e
    4
*/

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: LastChar
//  Description  : program which accept string from user and accept one character.Return index of last occurence of that character
//  Input        : String
//  Output       : integer
//  Date         : 15/11/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str, char ch)
{
    int icnt = 0, iresult = -1;
    while(str[icnt] != '\0')
    {
        if(str[icnt] == ch)
        {
            iresult = icnt;
        }
    
        icnt++;
    }
    
    return iresult;
    
}

int main()
{
    char arr[20];
    char cvalue = '\0';
    int iret = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter character : \n");
    scanf(" %c",&cvalue);

    iret = LastChar(arr, cvalue);

    printf("Character location is %d",iret);

    return EXIT_SUCCESS;
}