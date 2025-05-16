/*
    PROBLEM STATEMENT :
        WRITE A PROGRAM WHICH ACCEPTS NUMBER FROM USER AND DISPLAY ITS DIGIT IN REVERSE ORDER.
        
        EXPECTED RESULT :
        INPUT :2395
        OUTPUT : 5
                 9
                 3
                 2
*/

#include<stdio.h>

void DisplayDigit(int iNo)
{   
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d \t",iDigit);
        iNo = iNo / 10;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}