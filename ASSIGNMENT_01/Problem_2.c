/*
    PROBLEM STATEMENT : 
        PROGRAM TO PRINT 5 TIMES "MARVELLOUS" ON SCREEN
        EXPECTED OUTPUT : 1 . Marvellous
                          2 . Marvellous
                          3 . Marvellous
                          4 . Marvellous
                          5 . Marvellous
                        
*/


#include<stdio.h>

void Display()
{
    int i = 0;

    for(i = 1; i <= 5 ; i++)
    {
        printf(" %d . Marvellous \n" , i);
    }
}

int main()
{
    Display();
    return 0;
}