// write a program which accept temperature in fahrenheit and convert it into celsius
//////////////////////////////////////////////////////////
//
//  Function Name: FhtoCs
//  Description  : program which accept temperature in fahrenheit and convert it into celsius
//  Input        : float
//  Output       : double
//  Date         : 1/11/2026
//  Author       : Aakash Prakash Khopkar
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float ftemp)
{
    double dcelsius = 0.0;

    dcelsius = (ftemp - 32) * (5.0 / 9.0);

    return dcelsius;
}

int main()
{
    float fvalue = 0.0f;
    double dret = 0.0;

    printf("Enter tempertaure in fahrenheit : \n");
    scanf("%f",&fvalue);

    dret = FhtoCs(fvalue);

    printf("Temperature in Celsius is : %.4lf",dret);

    return EXIT_SUCCESS;
}