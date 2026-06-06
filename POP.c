#include<stdio.h>

int addition(int No1,int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int subtraction(int No1,int No2)
{
    int Ans = 0;
    Ans = No1 - No2;
    return Ans;
}

int main()
{
    int a = 11,b = 10;
    int result = 0;

    result = addition(a,b);
    printf("Addition is :%d\n",result);
    
    result = subtraction(a,b);
    printf("Subtraction is :%d\n",result);
    
    return 0;
}