//////////////////////////////////////////////////////////
//
//  Function Name: CheckNumber
//  Description  : Check whether a number is positive or negative
//  Input        : Integer
//  Output       : Integer
//  Date         : 20/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int ino)
{
    if(ino == 0)
    {
        printf("The number is  : %d",ino);
    }
    else if(ino < 0)
    {
        printf("The number is negative : %d",ino);
    }
    else
    {
        printf("The number is positive : %d",ino);
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    CheckNumber(ivalue);

    return EXIT_SUCCESS;
}
