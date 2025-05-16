/*
    PROBLEM STATEMENT : 
        ACCEPT THE NUMBER FROM USER PRINT THAT NUMBER OF * ON SCREEN.
        
        EXPECTED RESULT : 
        INPUT : 5
        EXPECTED OUTPUT : * * * * *

        INPUT : 7
        EXPECTED OUTPUT : * * * * * * *
                        
*/

#include<stdio.h>

void Display(int iNo)
{

   while(iNo > 0)
   {
        printf("* \t");
        iNo--;
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