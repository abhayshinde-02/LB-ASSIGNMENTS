/*
    PROBLEM STATEMENT :
        WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND RETURNS THE COUNT OF EVEN DIGITS.

    EXPECTED RESULT :
    INPUT : 2395
    OUTPUT : 1
    
    INPUT : 1018
    OUTPUT : 1

*/

#include<stdio.h>

int CountEven(int iNo)
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
        if((iDigit %2) == 0)
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

    iRet = CountEven(iValue);

    printf("Count of Even Digit from %d is %d",iValue , iRet);
    return 0;
}
