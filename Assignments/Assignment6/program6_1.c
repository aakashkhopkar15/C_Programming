//////////////////////////////////////////////////////////
//
//  Function Name: CalculateElectricityBill
//  Description  : Calculate Electricity Bill
//  Input        : Integer
//  Output       : Float 
//  Date         : 21/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iunit)
{
    float funit = 0.0f;
    

    if((iunit >= 0) && (iunit <= 100))
    {
        funit = iunit * 5;
        printf("The bill is : %0.2f",funit); 
    }
    else if((iunit > 100) && (iunit <= 200))
    {
        funit = (100 * 5) + (iunit - 100) * 7;
        printf("The bill is : %0.2f",funit);
    }
    else if((iunit > 200))
    {
        funit = (100 * 5) + (100 * 7) + (iunit - 200) * 10;
        printf("The bill is : %0.2f",funit);
    }
    
}

int main()
{
    int iunit = 0;

    printf("Enter consumed units : ");
    scanf("%d",&iunit);

    CalculateElectricityBill(iunit);

    return EXIT_SUCCESS;
}
