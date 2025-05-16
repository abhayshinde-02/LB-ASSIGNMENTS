/*
    PROBLEM STATEMENT : 
        ACCEPT THE NUMBER FROM THE USER AND CHECK WHETHER NUMBER IS EVEN OR ODD.
        
        EXPECTED RESULT : 
        INPUT : 12 
        EXPECTED OUTPUT : 12 IS EVEN NUMBER.

        INPUT : 3
        EXPECTED OUTPUT : 3 IS AN ODD NUMBER.
                        
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
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

    printf("Enter the number : \t");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("%d is an Even Number", iValue);
    }
    else
    {
        printf("%d is an Odd Number", iValue);
    }

    return 0;
}