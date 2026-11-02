// accept amount in us dollars and return its corresponding value in indian currency.Consider 1$ as 70 rupees

//////////////////////////////////////////////////////////
//
//  Function Name: DollarToINR
//  Description  : accept amount in us dollars and return its corresponding value in indian currency
//  Input        : Integer
//  Output       : Integer
//  Date         : 1/11/2026
//  Author       : Aakash Prakash Khopkar
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


   int DollarToINR(int ino)
{
   int iconvert = 0;

   iconvert = ino * 70;
   return iconvert;
}


int main()
{
    int ivalue = 0, iret = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    
    iret = DollarToINR(ivalue);

    printf("Value in INR is : %d\n",iret);

    return EXIT_SUCCESS;
}
