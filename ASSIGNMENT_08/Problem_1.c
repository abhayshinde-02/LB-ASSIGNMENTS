/*
    PROBLEM STATEMENT : 
        WRITE A PROGRAM WHICH ACCEPTS THE RADIUS OF CIRCLE FROM USER AND CALCULATE ITS AREA.
        CONSIDER THE VALUE OF PI AS 3.14.
        (AREA  = PI * RADIUS * RADIUS)

        EXPECTED RESULT :
        INPUT : 5.3
        OUTPUT : 88.2206

        INPUT : 10.4
        OUTPUT : 339.6224
*/

#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;

    double Area = 1;
    Area = 3.14 * fRadius * fRadius;

    return Area;
}

int main()
{   
    float fValue = 0;
    double dRet = 0;

    printf("Enter the radius of the circle :  ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle : %.4lf",dRet);  // DEFAULT %lf VALUE IS 6 DECIMAL. AND IF WE WANT TO INCREASE OR DECREASE WE JUST HAVE TO DO THIS %.nlf(%.4lf) 

    return 0;
}