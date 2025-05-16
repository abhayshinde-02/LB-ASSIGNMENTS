/*
    PROBLEM STATEMENT : 
        WRITE A PROGRAM WHICH ACCEPT NUMBER FROM THE USER AND PRINT THE NUMBER OF $ AND * ON SCREEN
        TIME COMPLEXITY FOR THIS PROGRAM IS O(N)

        EXPECTED OUTPUT :

        INPUT : 5
        OUTPUT : $ * $ * $ * $ * $ *

        INPUT : 5
        OUTPUT : $ * $ * $ * $ * $ *

*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ \t * \t");
    }

}
int main()
{   
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}