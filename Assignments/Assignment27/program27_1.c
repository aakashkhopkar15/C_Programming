///////////////////////////////////////////////////////////////////
//
//  Function Name   : CountCapital
//  Input           : Character 
//  Description     : count no.of capital character in String
//  Date            : 19/11/2026
//  Author          : Aakash Prakash Khopkar
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *str)
{
      int iCnt = 0;

      while (*str != '\0')
      {
            if((*str >= 'A') && (*str <= 'Z'))
            {
                iCnt++;
            }
            str++;
      }
      
      return iCnt;
}



int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n]s",arr);


    iRet = CountCapital(arr);

    printf("%d",iRet); 
    
    return EXIT_SUCCESS;
}
