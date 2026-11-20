// write a program which accept string from reverse string in place
/*
    input : abcd
    output : dcba

    input : abba
    output : abba
*/

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: StrRevX
//  Description  : write a program which accept string from reverse string in place
//  Input        : Integer
//  Output       : string
//  Date         : 15/11/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
    int icnt = 0, inth_index = 0;
    char temp = '\0';

    while(str[icnt] != '\0')
    {
        icnt++;
    }

    inth_index = icnt - 1;

    for(icnt = 0; icnt < inth_index; icnt++, inth_index--)
    {
        temp = str[icnt];
        str[icnt] = str[inth_index];
        str[inth_index] = temp;
    }
}

int main()
{
    char arr[100];

    printf("Enter a string: ");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);

    printf("Reversed string: %s\n", arr);

    return EXIT_SUCCESS;
}