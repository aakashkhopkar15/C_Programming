// write a program which accept area in square feet and convert it into square meter.
//////////////////////////////////////////////////////////
//
//  Function Name: SquareMeter
//  Description  : program which accept area in square feet and convert it into square meter
//  Input        : integer
//  Output       : double
//  Date         : 1/11/2026
//  Author       : Aakash Prakash Khopkar
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int ivalue)
{
    return ivalue * 0.0929;
}

int main()
{
    int  ivalue = 0;
    double dret = 0.0;

    printf("Enter area in square feet : \n");
    scanf("%d",&ivalue);

    dret = SquareMeter(ivalue);

    printf("Area in square meter is : %lf\n",dret);

    return EXIT_SUCCESS;
}
