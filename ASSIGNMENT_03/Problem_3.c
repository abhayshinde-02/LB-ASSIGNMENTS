/*
    Probelm Statement : 
        WRITE A PROGRAM WHICH ACCEPT ONE NUMBER FROM USE AND PRINT EVEN FACTORS OF THAT NUMBER

        EXPECTED RESULT:
        INPUT : 24
        OUTPUT : 2 4 6 8 12
        
*/
#include<stdio.h>

void DisplayFactors(int iNo)
{   
    if(iNo <= 0 )
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if(((iNo % iCnt) == 0) && ((iCnt % 2) == 0))
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

    DisplayFactors(iValue);



    return 0;
}