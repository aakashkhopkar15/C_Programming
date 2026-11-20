// Write a program which accept string from user and convert it into lower case
/*
    Marvellous Multi OS
    mARVELLOUS mULTI os
*/

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: struprx
//  Description  : program which accept string from user and convert it into lower case
//  Input        : String
//  Output       : string
//  Date         : 15/11/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void struprx(char *str)
{
    int icnt = 0;

    while(str[icnt] != '\0')
    {
        if(str[icnt] >= 'a' && str[icnt] <= 'z')
        {
            str[icnt] = str[icnt] - 32;
        }
        else if(str[icnt] >= 'A' && str[icnt] <= 'Z')
        {
            str[icnt] = str[icnt] + 32;
        }

        icnt++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("Modified string is : \n%s",arr);

    return EXIT_SUCCESS;
}