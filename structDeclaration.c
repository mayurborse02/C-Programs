#include<stdio.h>

//Declartion
struct Demo
{
    int i;   //4 byte 
    float f; //4 byte
};
int main()
{
    struct Demo dobj;

    printf("%d\n",sizeof(dobj));
    
    return 0;
}