/*
    PROBLEM STATEMENT :
        WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND DISPLAY BELOW PATTERN

        TIME COMPLEXITY IS O(2N)/O(N).

        INPUT : 5
        OUTPUT : * * * * * # # # # #

        INPUT : 3
        OUTPUT : * * * # # # 
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    int jCnt = 0;

    for(iCnt = 1; iCnt <=(2 * iNo); iCnt++)
    {
        if(iCnt <= iNo)
        {
            printf("* \t");
        }
        else
        {
            printf("# \t");
        }
    }
       

}

int main()
{
    int iValue = 0;

    printf("Enter the Number :  ");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}