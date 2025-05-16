/*
    PROBLEM STATEMENT : 
        WRITE A PROGRAM WHICH ACCEPTS WIDTH AND HEIGHT OF RECTANGLE FROM USER AND CALCULATE ITS AREA.
        (AREA  = WIDHT * HEIGHT)

        EXPECTED RESULT :
        INPUT : 5.3 9.78
        OUTPUT : 51.834
*/

#include<stdio.h>

double RectArea(float fWidth , float fHeight)
{

    double Area = 1;
    Area = fWidth * fHeight;

    return Area;
}

int main()
{   
    float fValue1 = 0 , fValue2 =0;
    double dRet = 0;

    printf("Enter the Width of rectangle :  ");
    scanf("%f",&fValue1);

    printf("Enter the Height of rectangle :  ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1 , fValue2);

    printf("Area of Rectangle : %.3lf",dRet); 
    return 0;
}