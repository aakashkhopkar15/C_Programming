// write a program which accept width & height of rectangle from user and calculate its area.
//////////////////////////////////////////////////////////
//
//  Function Name: RectArea
//  Description  : program which accept width & height of rectangle from user and calculate its area.
//  Input        : Integer
//  Output       : double
//  Date         : 1/11/2026
//  Author       : Aakash Prakash Khopkar
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

float RectArea(float fheight, float fwidth)
{
    double dret = 0.0;

    dret = (double)fheight * (double)fwidth;

    return dret;
}


int main()
{
    float fvalue1 = 0.0f, fvalue2 = 0.0f;
    double dret = 0.0;

    printf("Enter height : \n");
    scanf("%f",&fvalue1);

    printf("Enter width : \n");
    scanf("%f",&fvalue2);

    dret = RectArea (fvalue1, fvalue2);

    printf("The area of rectangle is : %.3lf\n",dret);

    return EXIT_SUCCESS;
}