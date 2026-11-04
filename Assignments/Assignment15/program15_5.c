//=====================================================================
// //  Author Name : Aakash Prakash Khopkar
//       Date        : 04/11/2026
//  //---------------------------------------------------------------------
//  Q.5) Write a program which accept total marks and obtained marks
//       from user and calculate percentage.
//---------------------------------------------------------------------
//  Input  : 1000 745
//  Output : 74.5%
//=====================================================================

#include<stdio.h>
#include<stdlib.h>

float Percentage(int iTotal, int iObtained)
{
    float fPer = 0.0;

    if(iTotal == 0)
    {
        return 0.0;
    }

    fPer = ((float)iObtained / iTotal) * 100;

    return fPer;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks: ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is: %.1f%%\n", fRet);

    return EXIT_SUCCESS;
}