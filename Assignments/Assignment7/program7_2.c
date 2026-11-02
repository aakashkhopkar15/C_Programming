//Write a program which accept number from user and print number till that number

//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : program which accept number from user and print number till that number
//  Input        : Integer
//  Output       : Integer 
//  Date         : 31/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int ino)
{
    int icnt = 0;

    for(icnt = 1; icnt <= ino;icnt++)
    {
        printf("%d\t",icnt);
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return EXIT_SUCCESS;
}