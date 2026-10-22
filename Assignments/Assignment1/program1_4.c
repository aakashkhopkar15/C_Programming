//////////////////////////////////////////////////////////
//
//  Function Name: -----
//  Description  : Check whether if number is divisible by 5 or not
//  Input        : Integer
//  Output       : Divisible by 5 or not
//  Date         : 19/10/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int main()
{
    int ivalue = 0;
    BOOL bret = false;

    printf("Enter numbers\n");
    scanf("%d",&ivalue);

    bret = Check(ivalue);

    if(bret == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return EXIT_SUCCESS;
}