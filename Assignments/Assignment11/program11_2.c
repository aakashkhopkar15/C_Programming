//Write a program which accepts number from user and display its digits in reverse order
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: DisplayDigit
//  Description  : accepts number from user and display its digits in reverse order
//  Input        : Integer
//  Output       : Integer
//  Date         : 03/11/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int istart, int iend)
{
    int icnt = 0;

    if(istart > iend)
    {
        printf("Invalid range");
    }

    for(icnt = istart; icnt >= iend; icnt++)
    {
        if(icnt % 2 == 0)
        {
            printf("%d\t",icnt);
        }
    }
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0;

    printf("Enter starting point : \n");
    scanf("%d",&ivalue1);

    printf("Enter ending point : \n");
    scanf("%d",&ivalue2);

    RangeDisplayEven(ivalue1, ivalue2);    

    return EXIT_SUCCESS;
}
