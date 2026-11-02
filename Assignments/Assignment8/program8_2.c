// Accept single digit from user and print it into word

//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Accept single digit from user and print it into word
//  Input        : Integer
//  Output       : Integer
//  Date         : 31/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int ino)
{
    switch (ino)
    {
    case 0:
        printf("zero\n");
        break;
    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");
        break;
    case 3:
        printf("three\n");
        break;
    case 4:
        printf("four\n");
        break;
    case 5:
        printf("five\n");
        break;
    case 6:
        printf("six\n");
        break;
    case 7:
        printf("seven\n");
        break;
    case 8:
        printf("eight\n");
        break;
    case 9:
        printf("nine\n");
        break;
    default:
        printf("Invalid input");
    }
}

    int main()
    {
        int ivalue = 0;
        printf("Enter number : \n");
        scanf("%d", &ivalue);

        Display(ivalue);

        return EXIT_SUCCESS;
    }
