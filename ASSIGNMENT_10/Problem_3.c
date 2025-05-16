/*
    PROBLEM STATEMENT :
        WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND RETURNS THE COUNT OF DIGITS IN BETWEEN 3 & 7.

    EXPECTED RESULT :
    INPUT : 2395
    OUTPUT : 1
    
    INPUT : 4521
    OUTPUT : 2

*/

#include<stdio.h>

int CountRange(int iNo)
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
        if((iDigit > 3) && (iDigit < 7))
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

    iRet = CountRange(iValue);

    printf("Count of Digit between 3 & 7 from %d is %d",iValue , iRet);
    return 0;
}
