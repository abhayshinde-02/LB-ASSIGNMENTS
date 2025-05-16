/*
    PROBLEM STATEMENT:
        WRITE A PROGRAM WHICH ACCEPTS NUMBER FROM USER AND RETURN THE DIFFRENCE BETWEEN SUMMATION OF ALL ITS FACTORS AND NON-FACTORS.
        TIME COMPLEXITY FOR THIS PROGRAM IS O(N).

        EXPECTED RESULT:
        INPUT : 12 
        OUTPUT : -34

        INPUT : 10
        OUTPUT : -29
*/

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0 , iSum2 = 0;
    
    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    return iSum1 - iSum2;

}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \t");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference Between the Summation of Factors and Non-Factor is : %d" , iRet);

    return 0;
}