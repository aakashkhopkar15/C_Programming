//////////////////////////////////////////////////////////
//
//  Function Name: CheckDivisibility
//  Description  : Check Divisibility by 5
//  Input        : Integer
//  Output       : Integer 
//  Date         : 20/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int ino)
{
    if((ino % 5 ) == 0)
    {
        printf("%d is divisible by 5",ino);
    }
    else
    {
        printf("Number is not divisible by 5");
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

CheckDivisibility(ivalue);

    return EXIT_SUCCESS;
}