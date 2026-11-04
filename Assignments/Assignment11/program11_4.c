//write a program which accepts range from user and return additiom of all even numbers in between that range 
#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: RangeSumEven
//  Description  : accepts range from user and return additiom of all even numbers in between that range 
//  Input        : Integer , Integer
//  Output       : Integer
//  Date         : 03/11/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int istart, int iend)
{
    int icnt = 0, isum = 0;

    if (istart > iend)
    {
        printf("Invalid range");
        return EXIT_FAILURE;
    }

    else
    {
        for (icnt = istart; icnt >= iend; icnt++)
        {
            if (istart >= 0 && iend >= 0)
            {
                if((icnt % 2) == 0 )
                {
                    isum = isum + icnt;
                }
            }
            else
            {
                printf("Invalid input\n");
                return EXIT_FAILURE;
            }
        }
    }

    return isum;
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0, iret = 0;

    printf("Enter starting point : \n");
    scanf("%d", &ivalue1);

    printf("Enter ending point : \n");
    scanf("%d", &ivalue2);

    iret = RangeSumEven(ivalue1, ivalue2);
    
    if(iret == EXIT_FAILURE)
    {
        return EXIT_FAILURE;
    }
    else
    {
        printf("Addition is : %d\n", iret);
    }

    return EXIT_SUCCESS;
}
