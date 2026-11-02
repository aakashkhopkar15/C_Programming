//Write a program which accept N and print first 5 multiples of N

//////////////////////////////////////////////////////////
//
//  Function Name: MultipleDisplay
//  Description  : program which accept N and print first 5 multiples of N
//  Input        : Integer
//  Output       : Integer 
//  Date         : 31/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int ino)
{
    int icnt = 0;

    for(icnt = 1; icnt <= 5; icnt++)
    {
        printf("%d\t",icnt * ino);
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    MultipleDisplay(ivalue);

    return EXIT_SUCCESS;
}