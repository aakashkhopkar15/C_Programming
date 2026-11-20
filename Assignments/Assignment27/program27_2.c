///////////////////////////////////////////////////////////////////
//
//  Function Name   : CountSmall
//  Input           : Character 
//  Description     : accept string and count small character
//  Date            : 19/11/2026
//  Author          : Aakash Prakash Khopkar
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountSmall(char *str)
{
      int iCnt = 0;

      while (*str != '\0')
      {
            if((*str >= 'a') && (*str <= 'z'))
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


    iRet = CountSmall(arr);

    printf("%d",iRet); 
    
    return EXIT_SUCCESS;
}