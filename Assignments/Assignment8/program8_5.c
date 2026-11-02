// write a program which accepts number from user and display its table in reverse order

//////////////////////////////////////////////////////////
//
//  Function Name: TableRev
//  Description  : program which accepts number from user and display its table in reverse order
//  Input        : Integer
//  Output       : prints the output
//  Date         : 1/11/2026
//  Author       : Aakash Prakash Khopkar
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void TableRev(int ino)
{
    int icnt = 0, imulti = 0;
    icnt = 10, imulti = 1;

    if(ino < 0)
    {
        ino = -ino;
    }

    while(icnt > 0)
    {
        imulti = ino * icnt;
        printf("%d\t",imulti);
        icnt--;
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    TableRev(ivalue);

    return EXIT_SUCCESS;
}
