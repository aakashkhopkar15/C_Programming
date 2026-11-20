// Write a program which accept string from user and display only digits from that string
/*
    input : marve89llous121
    output : 89121

    input : Demo
    output : 
*/

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: DisplayDigit
//  Description  : program which accept string from user and display only digits from that string
//  Input        : String
//  Output       : string
//  Date         : 15/11/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
    int icnt = 0;
    while(str[icnt] != '\0')
    {
        if((str[icnt] >= '1') && (str[icnt] <= '9'))
        {
            printf("%c",str[icnt]);
        }

        icnt++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string is : \n");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}