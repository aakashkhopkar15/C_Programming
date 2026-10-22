//////////////////////////////////////////////////////////
//
//  Function Name: CheckEven
//  Description  : To accept no and check if it is even or odd
//  Input        : Integer
//  Output       : Function return either true or false
//  Date         : 19/10/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool CheckEven(int ino)
{
    if((ino % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

typedef int BOOL;

int main()
{
    int ivalue = 0;
    BOOL bret = FALSE;

    printf("Enter number\n");
    scanf("%d",ivalue);

    bret = CheckEven(ivalue);

    if(bret == true)
    {
        printf("Number is Divisible");
    }
    else
    {
        printf("Number is not Divisible");
    }

    return EXIT_SUCCESS;
}