// Accept two number from user and display first number in second number of times
//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : To display first no in second number of times
//  Input        : Integer, Integer
//  Output       : Integer
//  Date         : 19/10/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int ino, int ifrequency)
{
    int icnt = 0;

    if(ifrequency<0)
    {
        ifrequency = -ifrequency;
    }

    for(icnt=1;icnt<=ifrequency;icnt++)
    {
        printf("%d\t",ino);
    }
}

int main()
{
    int ivalue = 0;
    int icnt = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);
    
    printf("Enter frequency\n");
    scanf("%d",&icnt);

    Display(ivalue,icnt);

    return EXIT_SUCCESS;
}