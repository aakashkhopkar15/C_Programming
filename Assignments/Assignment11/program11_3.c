#include <stdio.h>
#include <stdlib.h>

int RangeSum(int istart, int iend)
{
    int icnt = 0, isum = 0;

    if (istart > iend)
    {
        printf("Invalid range");
        return EXIT_FAILURE;
    }

    else
    {
        for (icnt = istart; icnt <= iend; icnt++)
        {
            if (istart >= 0 && iend >= 0)
            {
                isum = icnt + isum;
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

    iret = RangeSum(ivalue1, ivalue2);
    
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