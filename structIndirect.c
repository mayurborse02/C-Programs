#include<stdio.h>

//Declartion
#pragma pack(1)   // to used for Padding
struct Demo
{
    int i;   //4 byte 
    float f; //4 byte
    char ch; // 1 byte
};           //9 byte

int main()
{
    struct Demo dobj;

    struct Demo *ptr;

    ptr = &dobj;

    ptr->i = 11;
    ptr->ch = 'A';
    ptr->f = 10.0f;

    printf("%d\n",ptr->i);
    printf("%c\n",ptr->ch);
    printf("%f\n",ptr->f);
    return 0;
}