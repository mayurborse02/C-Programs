#include<stdio.h>

struct Hello
{
    float f ;      //4 byte
    int  arr[3];  //12 byte
}hobj;            //16 byte

int main()
{
    printf("Size of object is :%lu\n",sizeof(hobj));
    
    return 0;
}