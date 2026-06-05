#include<stdio.h>

//Declartion
#pragma pack(1)   // to used for Paddin
struct Demo
{
    int i;   //4 byte 
    float f; //4 byte
    char ch; // 1 byte
};           //9 byte

int main()
{
    struct Demo dobj;

    dobj.i = 11;
    dobj.ch = 'A';
    dobj.f = 10.0f;

    printf("%d\n",dobj.i);    //11
    printf("%c\n",dobj.ch);  //"A"
    printf("%f\n",dobj.f);   //10.0

    return 0;
}