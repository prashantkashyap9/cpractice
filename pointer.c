//Find the sum of two numbers using pointers
#include<stdio.h>
int main(){
    int a = 10 , b = 20;
    int *p1=&a , *p2=&b;
    printf("The sum of the and b is: %d ",*p1 + *p2);
    // p1 = address of a
    // p2 = address of b
    //*p1 = value of a is 10
    //*p2 = value of b is 20
}