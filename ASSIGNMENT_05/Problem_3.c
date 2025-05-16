/*
    PROBLEM STATEMENT : 
        WRITE A PROGRAM WHICH ACCEPT NUMBER FROM THE USER AND PRINT ITS NUMBER LINE
        TIME COMPLEXITY FOR THIS PROGRAM IS O(N)

        EXPECTED OUTPUT :

        INPUT : 5
        OUTPUT : -5 -4 -3 -2 -1 0 1 2 3 4 5

        INPUT : 8
        OUTPUT : -8 -7 -6 -5 -4 -3 -2 -1 0 1 2 3 4 5 6 7 8

*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d \t",iCnt);
    }

}
int main()
{   
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}