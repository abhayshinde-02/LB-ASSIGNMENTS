/*
    PROBLEM STATEMENT :
        WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND RETURNS THE COUNT OF ODD DIGITS.

    EXPECTED RESULT :
    INPUT : 2395
    OUTPUT : 3
    
    INPUT : 1018
    OUTPUT : 2

*/

#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit %2) != 0)
        {   
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the  Number : ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("Count of Odd Digit from %d is %d",iValue , iRet);
    return 0;
}
