/*
    PROBLEM STATEMENT :
        WRITE A PROGRAM WHICH ACCEPTS NUMBER FROM USER AND CHECK WHETHER IT CONTAINS 0 OR NOT.
        
        EXPECTED RESULT :
        INPUT : 2395
        OUTPUT : THERE IS NO ZERO.

        INPUT : 1018
        OUTPUT : IT CONTAINS ZERO.
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{   

    while(iNo > 0)
    {
        if((iNo % 10) == 0)
        {
            return true;
        }
        iNo = iNo / 10;
    }
    return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}
