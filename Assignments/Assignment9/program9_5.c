// write a program to find difference between even factorial and odd factorial of given number
//////////////////////////////////////////////////////////
//
//  Function Name: FactorialDiff
//  Description  : program to find difference between even factorial and odd factorial of given number
//  Input        : Integer
//  Output       : Integer
//  Date         : 1/11/2026
//  Author       : Aakash Prakash Khopkar
//
///////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)

{
    int iCnt = 0, iFactEven = 1, iFactOdd = 1, iDeff = 0;

    if(iNo < 0)            
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iFactEven = iFactEven * iCnt;
        }
        else
        {
            iFactOdd = iFactOdd * iCnt;
        }
    }
    return iDeff = iFactEven - iFactOdd;
}

int main()
{
    int iVAlue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iVAlue);

    iRet = FactorialDiff(iVAlue);

    printf(" Factorial Difference is : %d",iRet);

    return EXIT_SUCCESS;
}