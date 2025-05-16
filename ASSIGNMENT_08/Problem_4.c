/*
    PROBLEM STATEMENT : 
        WRITE A PROGRAM WHICH ACCEPTS TEMPERATURE IN FAHRENHEIT AND CONVERT IT INTO CELSIUS.
        (1 CELSIUS = (FAHRENHEIT - 32) *(5/9))

        EXPECTED RESULT :
        INPUT : 10
        OUTPUT : -12.2222

        INPUT : 34
        OUTPUT : 1.1111
*/

#include<stdio.h>

double FhtoCs(float fNo)
{
    double fCs = 0;

    fCs = ((fNo - 32) * (5.00 / 9.00));

    return fCs;

}

int main()
{   
    float fValue = 0;
    double dRet = 0;

    printf("Enter temerature in Fahrenheit :  ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celcius : %.4lf",dRet); 
    return 0;
}