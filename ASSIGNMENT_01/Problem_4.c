/*
    PROBLEM STATEMENT : 
        ACCEPT ONE NUMBER FROM USER AND CHECK WHETHER IT IS DIVISIBLE BY 5 OR NOT.
        
        EXPECTED RESULT :
        INPUT : 5 
        OUTPUT : 5 IS DIVISIBLE BY 5.

        NPUT : 29 
        OUTPUT : 29 IS DIVISIBLE BY 5.                        
*/


#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number :\t");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("%d is Divisible by 5",iValue);
    }
    else
    {
        printf("%d is not Divisible by 5",iValue);
    }

    return 0;
}