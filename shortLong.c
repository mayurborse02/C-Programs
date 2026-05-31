#include<stdio.h>

int main(){
    int i = 11;
    short int j = 11;
    long int k = 11;

    printf("Size of int : %lu\n",sizeof(i));   //4 byte
    printf("Size of short int :%lu\n",sizeof(j));  // 2 byte
    printf("Size of long int :%lu\n",sizeof(k));  //8 byte

    return 0;
}