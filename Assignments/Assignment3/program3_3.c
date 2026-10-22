//////////////////////////////////////////////////////////
//
//  Function Name: DisplayFactor
//  Description  : To accept no and print even factors of that number
//  Input        : Integer
//  Output       : Integer
//  Date         : 19/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayFactor(int ino)
{
    int icnt = 0;

    if(ino<=0)
    {
        ino = -ino;
    }

    for(icnt=1;icnt<=ino/2;icnt++)
    {
        if(((ino % icnt) == 0) && (icnt % 2) == 0)
        {
                printf("%d\t",icnt);    
        }
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter the number:\n");
    scanf("%d",&ivalue);

    DisplayFactor(ivalue);

    return EXIT_SUCCESS;
}