//Write a program which accept number from user and print that number of $ & * on screen

//////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : program which accept number from user and print that number of $ & * on screen
//  Input        : Integer
//  Output       : Integer 
//  Date         : 31/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int ino)
{
    int icnt = 0;

    if(ino < 0)
    {
        ino = -ino;
    }

    for(icnt = 1; icnt <= ino; icnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int ivalue = 0;
    printf("Enter the number : \n");
    scanf("%d",&ivalue);

    Pattern(ivalue);

    return EXIT_SUCCESS;
}

