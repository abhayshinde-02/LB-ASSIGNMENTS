/*
    Probelm Statement : 
        ACCEPT THE CHARACTER FROM USER AND CONVERT CASE OF THAT CHARACTER

        EXPECTED RESULT:
        INPUT : A
        OUTPUT : a
        
        INPUT : z
        OUTPUT : Z
*/
#include<stdio.h>

void DisplayConvert(char cValue)
{   
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("LowerCase of % c is %c", cValue , cValue + 32);
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("UpperCase of % c is %c", cValue , cValue - 32);
    }
    else
    {
        printf("Please Enter the valid Character");
    }
}

int main()
{
    char cValue = 0;

    printf("Enter the Character : \t");
    scanf("%c",&cValue);

    DisplayConvert(cValue);



    return 0;
}