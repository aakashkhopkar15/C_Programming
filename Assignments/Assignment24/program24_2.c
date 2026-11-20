// Write a program which accept string from user and accept one character. Return frequency of that character
  /*  Marvellous Multi OS
        M
        2

    Marvellous Multi OS
        W
        0
 */
//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: CountChar
//  Description  : program which accept string from user and accept one character. Return frequency of that character
//  Input        : String
//  Output       : integer
//  Date         : 15/11/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str, char ch)
{
    int icnt = 0, ifrequency = 0;
    while(str[icnt] != '\0')
    {
        if(str[icnt] == ch)
        {
            ifrequency++;
        }
    
        icnt++;
    }

    return ifrequency;

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

    iret = CountChar(arr, cvalue);

    printf("Character frequency is : %d",iret);

    return EXIT_SUCCESS;
}