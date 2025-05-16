/*
    PROBLEM STATEMENT:
        WRITE A PROGRAM WHICH ACCEPTS NUMBER FROM USER AND DISPLAYS ITS FACTORS IN DESCENDING ORDER
        TIME COMPLEXITY FOR THIS PROGRAM IS O(N/2).

        EXPECTED RESULT:
        INPUT : 12 
        OUTPUT : 6 4 3 2 1

        INPUT : 10
        OUTPUT : 5 2 1
*/

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo/2; iCnt >= 0 ; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d \t",iCnt);
        }
    }

}

int main()
{   
    int iValue = 0;

    printf("Enter the Number : \t");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}