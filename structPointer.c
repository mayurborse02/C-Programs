#include<stdio.h>

struct Demo
{
    int i;
    int *ptr;  //
};

int main()
{
    struct Demo dobj;

    printf("Size of object is:%lu\n",sizeof(dobj));  // 8 or 16 byte

    return 0;
}