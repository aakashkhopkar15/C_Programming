// write a program which accept distance in kilometer and convert it into meter
//////////////////////////////////////////////////////////
//
//  Function Name: KMtoMeter
//  Description  : program which accept distance in kilometer and convert it into meter
//  Input        : Integer
//  Output       : Integer
//  Date         : 1/11/2026
//  Author       : Aakash Prakash Khopkar
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int ino)
{
    if(ino < 0)
    {
        return EXIT_FAILURE;
    }
    else
    {
        return ino * 1000;
    }
    
}

int main()
{
    int ivalue = 0, iret = 0;    

    printf("Enter distance : \n");
    (scanf("%d",&ivalue) );
    
    iret = KMtoMeter(ivalue);

    if(iret == EXIT_FAILURE)
    {
        printf("Invalid input distance cannot be negative\n");
    }
    else
    {
        printf("Converted value in Meter is : %d",iret);
    }    

    return EXIT_SUCCESS;
}