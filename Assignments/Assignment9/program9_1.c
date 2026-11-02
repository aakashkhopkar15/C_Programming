// write a program which accepts number from user and display below pattern

//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : program which accepts number from user and display below pattern
//  Input        : Integer
//  Output       : prints the output
//  Date         : 1/11/2026
//  Author       : Aakash Prakash Khopkar
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


   void Display(int ino)
{
   int icnt = 0;

   for(icnt = 1;icnt <= ino;icnt++)
   {
      printf("*\t");
   }
   for(icnt = 1;icnt <= ino;icnt++)
   {
      printf("#\t");
   }
}


int main()
{
    int ivalue = 0;
    printf("Enter number\n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return EXIT_SUCCESS;
}
