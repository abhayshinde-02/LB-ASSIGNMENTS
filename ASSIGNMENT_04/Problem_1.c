/*
    PROBLEM STATEMENT:
        WRITE A PROGRAM WHICH ACCEPTS NUMBER FROM USER AND DISPLAYS ITS MULTIPLICAION OF FACTORS
        TIME COMPLEXITY FOR THIS PROGRAM IS O(N/2).

        EXPECTED RESULT:
        INPUT : 12 
        OUTPUT : 144

        INPUT : 32
        OUTPUT : 1024

*/

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {    
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;

}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \t");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors of %d is %d",iValue , iRet);

    return 0;
}