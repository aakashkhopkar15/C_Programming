// write a program to find factorial of given number

//////////////////////////////////////////////////////////
//
//  Function Name: Factorial
//  Description  : program to find factorial of given number
//  Input        : Integer
//  Output       : Integer
//  Date         : 1/11/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Factorial(int ino)
{
    int icnt = 0, ifact = 1;
    icnt = ino;

    if (ino < 0)
    {
        ino = -ino;
    }

    while (icnt != 0)
    {
        ifact = icnt * ifact;
        icnt--;
    }

    return ifact;
}

int main()
{
    int ivalue = 0, iret = 0;

    printf("Enter number\n");
    scanf("%d", &ivalue);

    iret = Factorial(ivalue);

    printf("Factorial of given number is : %d\n", iret);

    return EXIT_SUCCESS;
}