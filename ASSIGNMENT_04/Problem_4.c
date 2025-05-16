/*
    PROBLEM STATEMENT:
        WRITE A PROGRAM WHICH ACCEPTS NUMBER FROM USER AND RETURN SUMMATION OF ALL ITS NON FACTORS
        TIME COMPLEXITY FOR THIS PROGRAM IS O(N).

        EXPECTED RESULT:
        INPUT : 12 
        OUTPUT : 50

        INPUT : 15
        OUTPUT : 96
*/

#include<stdio.h>

int  SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \t");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Summation of all Non-Factors of %d is %d",iValue , iRet);

    return 0;
}