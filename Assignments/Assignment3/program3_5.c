// Accept one character from vowel from user and 
//////////////////////////////////////////////////////////
//
//  Function Name: Check
//  Description  : To accept character check that whether that character is vowel or not
//  Input        : Chracter
//  Output       : Either true or false
//  Date         : 19/10/2026
//  Author       : Aakash Prakash Khopkar
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckVowel(char cno)
{
    if((cno == 'a') || (cno == 'e') || (cno == 'i') || (cno == 'o') || (cno == 'u'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cvalue= '\0';
    bool bret = false;

    printf("Enter character : \n");
    scanf("%c",&cvalue);

    bret = CheckVowel(cvalue);

    if(bret == true)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return EXIT_SUCCESS;
}