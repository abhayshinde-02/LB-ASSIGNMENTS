/*
    PROBLEM STATEMENT :
        WRITE A PROGRAM WHICH ACCEPTS NUMBER FROM USER AND COUNT THE FREQUENCY OF 2 IN IT.
        
        EXPECTED RESULT :
        INPUT : 2395
        OUTPUT : 1

        INPUT : 1018
        OUTPUT : 0
*/

#include<stdio.h>

int CountTwo(int iNo)
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
        if(iDigit == 2)
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

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("Frequency of 2 in %d : %d",iValue , iRet);
}