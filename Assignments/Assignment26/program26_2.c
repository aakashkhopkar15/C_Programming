/* Accept character from user, If character is small display its corresponding capital & if small display
    its corresponding capital 
 */

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Input           : Character 
//  Description     : if character is small display cpital and vice versa. If other cases display as it is 
//  Date            : 19/11/2026
//  Author          : Aakash Prakash Khopkar
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
 
void Display(char ch)
{
    if(ch>='A' && ch<='Z')
    {
        printf("%c",ch+32);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("%c",ch-32);
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';
   
    printf("Enter Character\n");
    scanf("%c",&cValue);

    Display(cValue);

    
    return EXIT_SUCCESS;
}