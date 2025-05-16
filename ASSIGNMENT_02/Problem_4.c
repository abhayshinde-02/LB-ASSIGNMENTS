/*
    PROBLEM STATEMENT : 
        ACCEPT TWO NUMBERS FROM USER AND DISPLAYS FIRST NUMBER IN SECOND NUMBER OF TIMES.
        
        EXPECTED RESULT : 
        INPUT : 12 5 
        EXPECTED OUTPUT : 12 12 12 12 12

        INPUT : -2 3
        EXPECTED OUTPUT : -2 -2 -2
                        
*/

#include<stdio.h>

void Display(int iNo , int iFreq)
{
    int i = 0;

    for(i = 1; i <= iFreq ; i++)
    {
        printf("%d \t",iNo);
    }
}

int main()
{   
    int iValue = 0;
    int iCnt = 0;

    printf("Enter the first number : \t");
    scanf("%d", &iValue);

    printf("Enter the Second number : \t");
    scanf("%d", &iCnt);

    Display(iValue , iCnt);
    return 0;
}