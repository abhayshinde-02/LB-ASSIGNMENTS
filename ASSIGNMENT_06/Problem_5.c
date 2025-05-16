/*
    PROBLEM STATEMENT : 
       WRITE A PROGRAM WHICH ACCEPTS THE NUMBER FROM THE USER AND DISPLAYS ITS TABLE IN REVERSE

    TIME COMPLEXITY FOR THIS PROGRAM IS O(N)

    EXPECTED OUTPUT : 
    INPUT : 5
    OUTPUT : 50 45 40 35 30 25 20 15 10 5

    INPUT : 2
    OUTPUT : 20 18 16 14 12 10 8 6 4 2

    INPUT : -5
    OUTPUT : 50 45 40 35 30 25 20 15 10 5
*/

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d \t",iNo * iCnt);
    }
}

int main()
{   
    int iValue = 0;
    

    printf("Enter the Number :  ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}