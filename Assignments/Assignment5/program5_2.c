//////////////////////////////////////////////////////////
//
//  Function Name: CheckLeapYear
//  Description  : Check whether it is a leap year according to gregorian calender rules.
//  Input        : Integer
//  Output       : Integer 
//  Date         : 20/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iyear)
{
    if(iyear <= 0)
    {
        printf("Enter valid year\n");
        return;       
    }
    if(((iyear % 4) == 0) && ((iyear % 100) != 0) || ((iyear % 400) == 0))
    {
        printf("It is a leap year : %d",iyear);
    }
    else
    {
        printf("It is not a leap year");
    }
}

int main()
{
    int iyear = 0;

    printf("Enter year : \n");
    scanf("%d",&iyear);

    CheckLeapYear(iyear);

    return EXIT_SUCCESS;

}