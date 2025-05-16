/*
    PROBLEM STATEMENT : 
        WRITE A PROGRAM WHICH ACCEPTS NUMBER FROM THE USER AND IF NUMBER IS LESS THAN 50 THEN PRINT SMALL ,
        IF IT IS GRATER THAN 50 AND LESS THAN 100 THEN PRINT MEDIUM AND IF IT IS GREATER THAN 100 THEN PRINT LARGE.

    TIME COMPLEXITY FOR THIS PROGRAM IS O(N)

    EXPECTED OUTPUT : 
    INPUT : 30
    OUTPUT : SMALL

    INPUT : 90
    OUTPUT : MEDIUM

    INPUT : 120
    OUTPUT : LARGE
*/

#include<stdio.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("Small");
    }
    else if(iNo > 51 && iNo < 100)
    {
        printf("Medium");
    }
    else if(iNo > 100)
    {
        printf("Large");
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}