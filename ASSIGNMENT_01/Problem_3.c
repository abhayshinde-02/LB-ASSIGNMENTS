/*
    PROBLEM STATEMENT : 
        PROGRAM TO PRINT 5 TO 1 NUMBERS ON SCREEN.
        EXPECTED OUTPUT : 5 4 3 2 1.
                        
*/


#include<stdio.h>

void Display()
{
    int i = 5;
    while(i > 0)
    {
        printf("%d \t",i);
        i--;
    }
}

int main()
{
    Display();
    return 0;
}