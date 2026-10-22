//////////////////////////////////////////////////////////
//
//  Function Name: DisplayGrade
//  Description  : Accept marks of a student out of 100 and display the grade accordingly
//  Input        : Float
//  Output       : Prints appropriate grade according to input 
//  Date         : 20/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fmarks)
{
    if((fmarks >= 100) || (fmarks <= 0))
    {
        printf("Invalid Marks\n");
        return;
    }
    else if((fmarks <= 100) && (fmarks >= 90))
    {
        printf("Grade A");
    }
    else if((fmarks <= 89) && (fmarks >= 75))
    {
        printf("Grade B");
    }
    else if((fmarks <= 74) && (fmarks >= 60))
    {
        printf("Grade C");
    }
    else if((fmarks <= 59) && (fmarks >= 40))
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail\n");
    }
    
}

int main()
{
    float fmarks = 0.0f;

    printf("Enter the marks : ");
    scanf("%f",&fmarks);
    

    DisplayGrade(fmarks);

    return EXIT_SUCCESS;
}