/*
    PROBLEM STATEMENT : 
       WRITE A PROGRAM WHICH ACCEPTS THE NUMBER FROM THE USER AND DISPLAYS ITS TABLE

    TIME COMPLEXITY FOR THIS PROGRAM IS O(N)

    EXPECTED OUTPUT : 
    INPUT : 5
    OUTPUT : 5 10 15 20 25 30 35 40 45 50

    INPUT : 2
    OUTPUT : 2 4 6 8 10 12 14 16 18 20

    INPUT : -5
    OUTPUT : 5 10 15 20 25 30 35 40 45 50
*/

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= 10; iCnt++)
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