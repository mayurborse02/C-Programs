#include<stdio.h>

int main()
{
    int Arr[4] = {10,20,30,40};   //Member intialisation list with size
    int Brr[] ={10,20,30,40}; -   //Member intialisation list without size
    int Crr[4] ;

    Crr[0] = 10;
    Crr[1] = 20;
    Crr[3] = 30;
    Crr[4] = 40;

    printf("%d\n",Arr[0]);
    printf("%d\n",Brr[0]);
    printf("%d\n",Crr[0]);

    return 0;

}