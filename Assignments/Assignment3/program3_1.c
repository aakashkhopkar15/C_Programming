//////////////////////////////////////////////////////////
//
//  Function Name: PrintEven
//  Description  : To accept no and print no of even no on screen
//  Input        : Integer
//  Output       : Integer
//  Date         : 19/10/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void PrintEven(int ino)
{
    int icnt = 0;
    if(ino <= 0)
    {
        return;
    }

    for(icnt=1;icnt<=ino;icnt++)
    {
        printf("%d\t",icnt*2);
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number: \n");
    scanf("%d",&ivalue);

    PrintEven(ivalue);

    return EXIT_SUCCESS;
}
