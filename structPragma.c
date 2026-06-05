#include<stdio.h>

//Declartion
#pragma pack(1)
struct Demo
{
    int i;   //4 byte 
    float f; //4 byte
    char ch; // 1 byte
};           //9 byte
int main()
{
    struct Demo dobj;

    printf("%lu\n",sizeof(dobj));   // 9 byte
    
    return 0;
}