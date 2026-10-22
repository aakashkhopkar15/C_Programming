//////////////////////////////////////////////////////////
//
//  Function Name: Divide
//  Description  : Performs and prints division
//  Input        : Integer,Integer
//  Output       : Integer
//  Date         : 19/10/2026
//  Author       : Aakash Prakash Khopkar
//
//////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Divide(int ino1, int ino2)
{
    int ians = 0;

    if(ino2 == 0)
    {
        return EXIT_FAILURE;
    }
    ians = ino1 / ino2;
    return ians;
}

int main()
{
    int ivalue1 = 15, ivalue2 = 5;
    int iret = 0;

    iret = Divide(ivalue1,ivalue2);

    printf("Division is %d\n",iret);

    return EXIT_SUCCESS;
}
