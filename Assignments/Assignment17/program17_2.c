// Accept number of rows and columns from user and display below pattern
/*
    2   4   6   8   10
    1   3   5   7   9    
    2   4   6   8   10
    1   3   5   7   9
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int irow, int icol)
{
    int i = 0, j = 0, icnt1 = 0, icnt2 = 0;
    icnt2 = 1;

    for(i = 1; i <= irow; i++)      
    {
        icnt1 = 2, icnt2 = 1;

        for(j = 1; j <= icol; j++)   
        {
            if((i % 2) != 0)
            {   
                printf("%d\t",icnt1);  
                icnt1+=2;                           
            }
            else
            {               
                printf("%d\t",icnt2);
                icnt2+=2;                 
            }
           
        }

        printf("\n\n");
    }
}


int main()
{
    int ivalue1 = 0, ivalue2 = 0;

    printf("Enter number of rows and columns : \n");
    scanf("%d%d",&ivalue1,&ivalue2);

    Pattern(ivalue1, ivalue2);

    return EXIT_SUCCESS;
}