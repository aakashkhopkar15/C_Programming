//////////////////////////////////////////////////////////
//
//  Function Name: CalculateDiscount
//  Description  : Calculate Shopping Discount
//  Input        : Float
//  Output       : Float 
//  Date         : 21/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float famount)
{
    float fdiscount = 0.0f;
    float ffinal_amount = 0.0f;

    if(famount <= 0 )
    {
        printf("Invalid amount\n");
    }
    else if(famount < 1000)
    {
        printf("Payable amount is : %0.2f",famount);
    }
    else if((famount >= 1000) && (famount < 5000))
    {
        fdiscount = famount * 0.1;
        ffinal_amount = famount - fdiscount;
        printf("Payable amount is : %0.2f",ffinal_amount);
    }
    else
    {
        fdiscount = famount * 0.2;
        ffinal_amount = famount - fdiscount;
        printf("Payable amount is : %0.2f",ffinal_amount);
    }
}

int main()
{
    float famount = 0.0f;

    printf("Enter purchase amount :\n");
    scanf("%f",&famount);

    CalculateDiscount(famount);

    return EXIT_SUCCESS;
}