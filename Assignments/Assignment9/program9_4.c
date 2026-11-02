// write a program to find even factorial of given number
//////////////////////////////////////////////////////////
//
//  Function Name: EvenFactorial
//  Description  : program to find od factorial of given number
//  Input        : Integer
//  Output       : Integer
//  Date         : 1/11/2026
//  Author       : Aakash Prakash Khopkar
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


   int OddFactorial(int ino)
{
   int icnt = 0, imulti = 0;
   imulti = 1;

   if(ino < 0)
   {
    ino = -ino;
   }

   for(icnt = ino;icnt > 0; icnt--)
   {
        if(icnt % 2 != 0)
        {
            imulti = imulti * icnt;
        }
   }
   return imulti;
}


int main()
{
    int ivalue = 0, iret = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    
    iret = OddFactorial(ivalue);

    printf("Odd Factorial of number is : %d\n",iret);

    return EXIT_SUCCESS;
}
