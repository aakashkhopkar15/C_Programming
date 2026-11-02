//Write a program which accept N from user and print all odd numbers upto N

//////////////////////////////////////////////////////////
//
//  Function Name: OddDisplay
//  Description  : program which accept  N from user and print all odd numbers upto N
//  Input        : Integer
//  Output       : Integer 
//  Date         : 31/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int ino)
{
    int icnt = 0;

    for(icnt = 1; icnt <= ino; icnt++)
    {
        if((icnt % 2) != 0)
        {
            printf("%d\t",icnt);
        }
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    OddDisplay(ivalue);

    return EXIT_SUCCESS;
}