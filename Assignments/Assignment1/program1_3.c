//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Display no in descending order
//  Input        : -------
//  Output       : Prints / Dispalys from 5 to 1 in descending order
//  Date         : 19/10/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display()
{
    int i = 0;
    i = 5;

    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}