/*
    PROBLEM STATEMENT :
        WRITE A PROGRAM WHICH ACCEPTS NUMBER FROM USER AND COUNT THE FREQUENCY SUCH A DIGIT WHICH ARE LESS OF 6.
        
        EXPECTED RESULT :
        INPUT : 2395
        OUTPUT : 3

        INPUT : 1018
        OUTPUT : 3
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
        if(iDigit < 6)
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

    printf("Frequency of Number less than 6 in %d : %d",iValue , iRet);
}