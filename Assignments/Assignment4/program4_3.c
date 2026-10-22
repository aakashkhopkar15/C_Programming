//////////////////////////////////////////////////////////
//
//  Function Name: FindGreater
//  Description  : Find the greatest of two numbers
//  Input        : Integer, Integer
//  Output       : Integer
//  Date         : 20/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void FindGreater(int ino1, int ino2)
{
    if(ino1 > ino2)
    {
        printf("%d is greater",ino1);
    }
    else if(ino1 < ino2)
    {
        printf("%d is greater",ino2);   
    }
    else
    {
        printf("%d is equal to %d",ino1,ino2);
    }
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0;

    printf("Enter first number : \n");
    scanf("%d",&ivalue1);

    printf("Enter second number : \n");
    scanf("%d",&ivalue2);

    FindGreater(ivalue1, ivalue2);

    return EXIT_SUCCESS;
}