/*
    PROBLEM STATEMENT :
        WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND RETURNS THE MULTIPLICATION OF ALL DIGIT.
    NOTE:
        IN THIS CASE IF THERE IS 0(ZERO) IN BETWEEN THE DIGIT OF NUMBER WE IGNORE IT OR CONSIDER IT AS 1.

    EXPECTED RESULT :
    INPUT : 2395
    OUTPUT : 270
    
    INPUT : 1018
    OUTPUT : 8

*/

#include<stdio.h>

int MultDigit(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            iDigit = 1;
        }
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the  Number : ");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);

    printf("Multiplication of Digit from %d is %d",iValue , iRet);
    return 0;
}
