//////////////////////////////////////////////////////////
//
//  Function Name: CheckTriangle
//  Description  : Check Triangle Validity
//  Input        : Integer, Integer, Integer
//  Output       : Prints according to the condition 
//  Date         : 21/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iside1, int iside2, int iside3)
{
    if(iside1 <= 0 || iside2 <= 0 ||iside3 <= 0)
    {
        printf("Invalid input\n");
        return;        
    }
    else if((iside1 < iside2 + iside3) && (iside2 < iside1 + iside3) && (iside3 < iside2 + iside1))
    {
        printf("Valid triangle\n");
    }
}

int main()
{
    int iside1 = 0, iside2 = 0, iside3 = 0;

    printf("Enter three sides\n");
    scanf("%d%d%d",&iside1,&iside2,&iside3);

    CheckTriangle(iside1, iside2, iside3);

    return EXIT_SUCCESS;
}