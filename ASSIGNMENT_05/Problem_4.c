/*
    PROBLEM STATEMENT : 
        WRITE A PROGRAM WHICH ACCEPT N FROM THE USER AND PRINTS ALL ODD NUMBER UPTO N 
        TIME COMPLEXITY FOR THIS PROGRAM IS O(N)

        EXPECTED OUTPUT :

        INPUT : 5
        OUTPUT : 1 3 5

        INPUT : 15
        OUTPUT : 1 3 5 7 9 11 13 15

*/

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;
        
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iCnt % 2) != 0)
            {
                printf("%d \t",iCnt);
            }
        }
}
int main()
{   
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}