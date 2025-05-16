/*
    PROBLEM STATEMENT :
        ACCEPT AMOUNT IN US DOLLAR AND RETURN ITS CORRESPONDING VALUE IN INDIAN CURRENCY.
        CONSIDER $1 as Rs.70.


        INPUT : 10
        OUTPUT : 700

        INPUT : 3
        OUTPUT : 210
*/

#include<stdio.h>

int DollarToINR(int iNo)
{
    int INR = 0;

    INR = iNo * 70;

    return INR;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Amount in USD :  ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value of $ %d in INR is Rs.%d",iValue , iRet);


    return 0;
}