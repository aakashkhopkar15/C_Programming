// Write a program which accept string from user and count number of white spaces
/*
    input : Marvellous
    output : 0

    input : Marvellous Infosystems
    output : 1

    input : Marvellous infosystems by Piyush Manohar Khairnar
    output : 5
*/

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: CountWhite
//  Description  : program which accept string from user and count number of white spaces
//  Input        : String
//  Output       : string
//  Date         : 15/11/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CountWhite(char *str)
{
    int icnt = 0, iwhiteSpace = 0;
    while(str[icnt] != '\0')
    {
       if(str[icnt] == ' ')
       {
        iwhiteSpace++;
       }

        icnt++;
    }

    printf("%d",iwhiteSpace);
}

int main()
{
    char arr[20];

    printf("Enter string is : \n");
    scanf("%[^'\n']s",arr);

    CountWhite(arr);

    return EXIT_SUCCESS;
}