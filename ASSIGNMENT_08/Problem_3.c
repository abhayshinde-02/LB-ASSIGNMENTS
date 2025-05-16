/*
    PROBLEM STATEMENT : 
        WRITE A PROGRAM WHICH ACCEPTS DISTANCE IN KILOMETER AND CONVERT IT INTO METER
        (1 KILOMETER = 1000 METER)

        EXPECTED RESULT :
        INPUT : 5
        OUTPUT : 5000

        INPUT : 12
        OUTPUT : 12000
*/

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iKM = 1;

    iKM = iNo * 1000;

    return iKM;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Distance in KM :  ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meter : %d",iRet); 
    return 0;
}