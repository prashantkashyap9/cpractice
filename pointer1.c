#include<stdio.h>
int main(){
    int *p,**q,a=10;
    p=&a;
    q=&p;
    printf("%d\n",a); // value of a 
    printf("%d\n",p); // address of a
    printf("%d\n",*p); // value of a 
    printf("%d\n",q); // address of p
    printf("%d\n",*q); // address of a
    printf("%d\n",**q); // value of a
}