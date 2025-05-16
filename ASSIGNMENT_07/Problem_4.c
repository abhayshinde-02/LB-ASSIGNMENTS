/*
    PROBLEM STATEMENT :
        WRITE A PROGRAM TO FIND THE ODD FACTORIAL OF GIVEN NUMBER.
        
        TIME COMPLEXITY : O(N)

        EXPECTED RESULT: 
        INPUT : 5
        OUTPUT : 15

        INPUT : 10
        OUTPUT : 945
*/

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :  ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorials of %d is %d",iValue , iRet);


    return 0;
}