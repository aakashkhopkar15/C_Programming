// write a program which accept radius of circle from user and calculate its area
//////////////////////////////////////////////////////////
//
//  Function Name: CircleArea
//  Description  : write a program which accept radius of circle from user and calculate its area
//  Input        : Integer
//  Output       : double
//  Date         : 1/11/2026
//  Author       : Aakash Prakash Khopkar
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

# define PI 3.14

float CircleArea(float fradius)
{
    float fret = 0.0f;

    fret = PI * fradius * fradius;

    return fret;
}


int main()
{
    float fvalue = 0.0f;
    float fret = 0.0f;

    printf("Enter radius :  \n");
    scanf("%f",&fvalue);

    fret = CircleArea(fvalue);

    printf("The area of circle is : %lf\n",fret);

    return EXIT_SUCCESS;
}
