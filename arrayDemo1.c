#include<stdio.h>

int main()
{
    char cArr[4] = {'A','B','C','D'};
    int iArr[4] ={10,20,30,40};
    float fArr[4] = {10.00f,20.00f,30.00f,40.00f};
    double dArr[4] = {10.0,20.0,30.0,40.0};

    printf("Size of character array :%lu\n",sizeof(cArr));  //4 byte
    printf("Size of integer array :%lu\n",sizeof(iArr));   //16 byte
    printf("size of float array :%lu\n",sizeof(fArr));   //16 byte
    printf("Size of double array :%lu\n",sizeof(dArr));  //32 byte
    
    
    
    return 0;
}