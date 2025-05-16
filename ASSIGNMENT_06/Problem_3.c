/*
    PROBLEM STATEMENT : 
       WRITE A PROGRAM TO FIND FACTORIAL OF GIVEN NUMBER.

    TIME COMPLEXITY FOR THIS PROGRAM IS O(N)

    EXPECTED OUTPUT : 
    INPUT : 5
    OUTPUT : 120

    INPUT : -5
    OUTPUT : 120

    INPUT : 4
    OUTPUT : 24
*/

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is %d",iValue , iRet);

    return 0;
}