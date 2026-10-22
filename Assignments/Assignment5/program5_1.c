//////////////////////////////////////////////////////////
//
//  Function Name: FindGreatest
//  Description  : Determine the greatest no amongst them.
//  Input        : Integer, Integer, Integer
//  Output       : Integer 
//  Date         : 20/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int ino1, int ino2, int ino3)
{
    if((ino1 >= ino2) && (ino1 >= ino3))
    {
        printf("The greater number is : %d",ino1);
    }
    else if((ino2 >= ino1) && (ino2 >= ino3))
    {
        printf("The greater number is : %d",ino2);  
    }
    else
    {
        printf("The greater number is : %d",ino3);
    } 
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0, ivalue3 = 0;

    printf("Enter three numbers :\n");
    scanf("%d%d%d",&ivalue1,&ivalue2,&ivalue3);

    FindGreatest(ivalue1,ivalue2,ivalue3);

    return EXIT_SUCCESS;
}
