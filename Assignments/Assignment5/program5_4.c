//////////////////////////////////////////////////////////
//
//  Function Name: CheckMultipleDivisibility
//  Description  : Determine whether it is divisible by both 3 and 5, only 3,only 5, neither
//  Input        : Integer
//  Output       : Integer 
//  Date         : 20/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int ivalue)
{
    if((ivalue % 3)== 0 && (ivalue % 5)== 0 )
    {
        printf("Divisible by both");
    }
    else if((ivalue % 3)== 0)
    {
        printf("Divisible by 3 only");
    }
    else if((ivalue % 5)== 0)
    {
        printf("Divisible by 5 only");
    }
    else
    {
        printf("Not divisible by either");
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number : ");
    scanf("%d",&ivalue);

    CheckMultipleDivisibility(ivalue);

    return EXIT_SUCCESS;
}