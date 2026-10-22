//////////////////////////////////////////////////////////
//
//  Function Name: Accept
//  Description  : To accept no and print no of * on screen
//  Input        : Integer
//  Output       : Special Chracter that is *
//  Date         : 19/10/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////


#include<stdio.h.>
#include<stdlib.h>

void Accept(int ino)
{
    int icnt = 0;

    for(icnt=1;icnt<=ino;icnt++)
    {
        printf("*\n",icnt);
    }
}

int main()
{
    int ivalue = 0;
    
    printf("Enter the number\n");
    scanf("%d",&ivalue);

    Accept(ivalue);

    return EXIT_SUCCESS;
}