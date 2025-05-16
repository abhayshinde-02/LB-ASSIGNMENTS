/*
    PROBLEM STATEMENT : 
        ACCEPT ONE NUMBER FROM USER AND PRINT THAT NUMBER OF * ON SCREEN.
        
        EXPECTED RESULT :
        INPUT : 5
        OUTPUT : * * * * *

        INPUT : 10 
        OUTPUT : * * * * * * * * * *                        
*/


#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <=iNo ; iCnt++)
    {
        printf("* \t");
    }
}


int main()
{
    int iValue = 0;


    printf("Enter the Number :\t");
    scanf("%d",&iValue);

    Accept(iValue);
    
    return 0;
}