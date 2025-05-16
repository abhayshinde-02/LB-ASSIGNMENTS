/*
    PROBLEM STATEMENT : 
        WRITE A PROGRAM WHICH ACCEPTS AREA IN SQUARE FEET AND CONVERT IT INTO SQUARE METER.
        (1 SQUARE FEET = 0.0929 SQUARE METER)

        EXPECTED RESULT :
        INPUT : 5
        OUTPUT : 0.464515

        INPUT : 7
        OUTPUT : 0.650321
*/

#include<stdio.h>

double SquareMeter(float fNo)
{
    double fSf = 0;

    fSf = (fNo * 0.0929);

    return fSf;

}

int main()
{   
    float fValue = 0;
    double dRet = 0;

    printf("Enter area in square feet(f2) :  ");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);

    printf("Area in SquareMeter(m2) : %lf",dRet); 
    return 0;
}