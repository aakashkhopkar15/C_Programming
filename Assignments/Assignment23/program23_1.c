// Write a program which accept string from user and convert it into lower case
/*
    Marvellous Multi OS
    marvellous multi os
*/
//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: strlwrx
//  Description  : program which accept string from user and convert it into lower case
//  Input        : String
//  Output       : string
//  Date         : 15/11/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void strlwrx(char *str)
{
    int icnt = 0;

    while(str[icnt] != '\0')
    {
        if(str[icnt] >= 'A' && str[icnt] <= 'Z')
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

    strlwrx(arr);

    printf("Modified string is : \n%s",arr);

    return EXIT_SUCCESS;
}
