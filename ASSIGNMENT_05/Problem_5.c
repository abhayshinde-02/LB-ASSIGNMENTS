/*
    PROBLEM STATEMENT : 
        WRITE A PROGRAM WHICH ACCEPT N FROM THE USER AND PRINTS FIRST 5 MULTIPLES OF N
        TIME COMPLEXITY FOR THIS PROGRAM IS O(5)

        EXPECTED OUTPUT :

        INPUT : 5
        OUTPUT : 1 3 5

        INPUT : 15
        OUTPUT : 1 3 5 7 9 11 13 15

*/

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMult = 0;
        
        for(iCnt = 1; iCnt <= 5; iCnt++)
        {
            iMult = iCnt * iNo;
            printf("%d \t",iMult);
        }
}
int main()
{   
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}