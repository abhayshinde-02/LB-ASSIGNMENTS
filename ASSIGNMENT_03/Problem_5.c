/*
    Probelm Statement : 
        ACCEPT THE CHARACTER FROM USER AND CHECK WHETHER THAT CHARACTER IS VOWEL (a,e,i,o,u) OR NOT

        EXPECTED RESULT:
        INPUT : A
        OUTPUT : A IS VOWEL.
        
        INPUT : Z
        OUTPUT : Z IS NOT A VOWEL.
*/
#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char cValue)
{   
    if( cValue == 'a' || cValue =='e' || cValue =='i' || cValue =='o' || cValue =='u')
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
    char cValue = 0;
    bool bRet = false;


    printf("Enter the Character : \t");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == true)
    {
        printf("%c is a Vowel",cValue);
    }
    else
    {
        printf("%c is not a Vowel",cValue);
    }

    return 0;
}