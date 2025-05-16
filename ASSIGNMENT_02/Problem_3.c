/*
    PROBLEM STATEMENT : 
        ACCEPT THE NUMBER FROM USER , IF NUMBER IS LESS THAN 10 THEN PRINT "HELLO" OTHERWISE PRINT "DEMO"
        
        EXPECTED RESULT : 
        INPUT : 9
        EXPECTED OUTPUT : HELLO

        INPUT : 15
        EXPECTED OUTPUT : DEMO
                        
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter the number : \t");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}