/*
    PROBLEM STATEMENT :
        WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND RETURNS THE DIFFERENCE BETWEEN SUMMATION OF EVEN DIGIT AND SUMMATION OF ODD DIGIT.
    

    EXPECTED RESULT :
    INPUT : 2395
    OUTPUT : -15
    
    INPUT : 1018
    OUTPUT : 6

*/

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iSum1 = iSum1 + iDigit;
        }
        else
        {
            iSum2 = iSum2 + iDigit;
        }
        iNo = iNo / 10;

        iDiff = iSum1 - iSum2;
    }
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the  Number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Difference between Summation of Even and Summation of Odd from %d is %d",iValue , iRet);
    return 0;
}
