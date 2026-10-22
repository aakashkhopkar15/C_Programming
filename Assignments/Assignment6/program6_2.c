//////////////////////////////////////////////////////////
//
//  Function Name: CheckAdmission
//  Description  : Check Eligibility
//  Input        : Float, Integer
//  Output       : Prints whether respective person is eligible or not 
//  Date         : 21/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fmarks, int iage)
{
    if(iage < 0 || (fmarks < 0) || (fmarks > 100))
    {
        printf("Invalid input\n");
    }
    else if((iage >= 17) && (fmarks >= 60))
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible");
    }
}

int main()
{
    float fmarks = 0.0f;
    int iage = 0;

    printf("Enter marks and age: \n");
    scanf("%f%d",&fmarks,&iage);

    CheckAdmission(fmarks, iage);

    return EXIT_SUCCESS;
}
