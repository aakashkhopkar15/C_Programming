/*
    write a program whch accept numeber from user and if number is less than 50 then print small, if it is greater than 50
    and less than 100 then print medium, if it is greater than 100 print large.
*/

//////////////////////////////////////////////////////////
//
//  Function Name: MultipleDisplay
//  Description  : program whch accept numeber from user and if number is less than 50 then print small,
//                 if it is greater than 50 and less than 100 then print medium, if it is greater than 100 print large. 
//  Input        : Integer
//  Output       : Integer 
//  Date         : 31/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Number(int ino)
{
    if(ino < 50)
    {
        printf("Small\n");
    }
    else if(ino > 50 && ino < 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    Number(ivalue);

    return EXIT_SUCCESS;
}
