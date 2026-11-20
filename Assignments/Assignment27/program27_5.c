///////////////////////////////////////////////////////////////////
//
//  Function Name   : Reverse
//  Input           : Character 
//  Description     : accept string and display string in reverse order
//  Date            : 19/11/2026
//  Author          : Aakash Prakash Khopkar
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    char *ptr = str;

    while(*ptr != '\0')
    {
        ptr++;
    }

    ptr--;

    while(ptr >= str)
    {
        printf("%c", *ptr);
        ptr--;
    }

    printf("\n");
}

int main()
{
    char Arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s", Arr);

    Reverse(Arr);

    return EXIT_SUCCESS;
}