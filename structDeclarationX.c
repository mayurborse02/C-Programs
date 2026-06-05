#include<stdio.h>

//Declartion
struct Demo
{
    int i;   //4 byte 
    float f; //4 byte
    char ch; // 1 byte
};
int main()
{
    struct Demo dobj;

    printf("%lu\n",sizeof(dobj));   // 12 byte
    
    return 0;
}