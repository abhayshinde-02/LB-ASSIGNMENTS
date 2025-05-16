/*
    PROBLEM STATEMENT :
        WRITE A PROGRAM WHICH RETURNS DIFFERENCE BETWEEN EVEN FACTORIAL AND ODD FACTORIAL OF GIVEN NUMBER.

        TIME COMPLEXITY : O(N)

        EXPECTED RESULT: 
        INPUT : 5
        OUTPUT : 15

        INPUT : 10
        OUTPUT : 945
*/

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iDiff = 0;
    int iFact1 = 1;
    int iFact2 = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFact1 = iFact1 * iCnt;
        }
        else
        {
            iFact2 = iFact2 * iCnt;
        }   
    }

    printf("Even Factorial : %d \n",iFact1);
    printf("Odd Factorial : %d \n",iFact2);

    iDiff = iFact1 - iFact2;
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :  ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Difference between Even and Odd Factorials of %d is %d",iValue , iRet);


    return 0;
}