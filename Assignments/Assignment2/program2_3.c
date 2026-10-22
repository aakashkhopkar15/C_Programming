//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Prints Hello if no is less than 10 otherwise Demo
//  Input        : Integer
//  Output       : Prints Hello if no is less than 10 otherwise Demo
//  Date         : 19/10/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int ino)
{
    if(ino < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return EXIT_SUCCESS;
}