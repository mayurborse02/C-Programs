#include<stdio.h>

int no = 11;   //Global variable

void fun()
{
    int i = 51;   //Local variable
    printf("Inside fun: %d\n",i);
    printf("Inside fun:%d\n",no);
}

int main()
{
    int i = 21;  //Local variable

    printf("Inside the main:%d\n",i);
    printf("Inside the main:%d\n",no);

    fun();

    
    return 0;

}