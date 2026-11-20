// Accept division of student from user and depends on the division display exam timing

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: DisplaySchedule
//  Description  : Accept division of student from user and depends on the division display exam timing
//  Input        : String
//  Output       : string
//  Date         : 17/11/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv >= 'a' && chDiv <= 'z')
    {
        chDiv = chDiv - 32;
    }
    
    switch(chDiv)
    {
        case 'A':
            printf("7 AM\n");
            break;

        case 'B':
        printf("8:30 AM\n");
        break;

        case 'C':
        printf("9:20 AM\n");
        break;

        case 'D':
        printf("10:30 AM\n");
        break;

        default:
        printf("Invalid input\n");

    }
}

int main()
{   
    char cvalue = '\0';

    printf("Enter your division :\n");
    scanf("%c",&cvalue);

    DisplaySchedule(cvalue);

    return EXIT_SUCCESS;
}