//////////////////////////////////////////////////////////
//
//  Function Name: CheckEligibilityCriteria
//  Description  : Check Voting Eligibility
//  Input        : Integer
//  Output       : Print 
//  Date         : 20/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iage)
{
    if(iage <= 0)
    {
        printf("Age invalid\n");
        return;
    }
    else if(iage < 18)
    {
        printf("Not eligible for voting");
    }
    else
    {
        printf("Eligible for voting");   
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter your age : \n");
    scanf("%d",&ivalue);

    CheckVotingEligibility(ivalue);

    return EXIT_SUCCESS;
}