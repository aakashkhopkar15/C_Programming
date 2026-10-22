//////////////////////////////////////////////////////////
//
//  Function Name: CheckEvenOdd
//  Description  : Check even or odd number
//  Input        : Integer
//  Output       : Integer
//  Date         : 20/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int ino)
{
    if((ino % 2) == 0)
    {
        printf("Number is even : %d",ino);
    }
    else
    {
        printf("Number is odd : %d",ino);
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    CheckEvenOdd(ivalue);

    return EXIT_SUCCESS;
}