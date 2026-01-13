// A code for all string properties
#include<stdio.h>
#include<string.h>
int main(){
    char a[50],b[50],c[50],d[50];
    puts("Enter a upper case string: ");
    gets(a);
    puts("Enter a lower case string: ");
    gets(b);
    puts("Enter a name string: ");
    gets(c);
    puts("Enter a surname string: ");
    gets(d);

    //print all four strings
    puts(a);
    puts(b);
    puts(c);
    puts(d);

    // print the length of all strings
    printf("%d\n",strlen(a));
    printf("%d\n",strlen(b));
    printf("%d\n",strlen(c));
    printf("%d\n",strlen(d));

    //convert the lowecase string in uppercase
    printf("This is the upper case to lower case string: ");
    puts(strlwr(a));

    //convert the upper case string in the lowercase string
    printf("This is the lower case to uppercase string: ");
    puts(strupr(b));

    // print the reverse string
    printf("this is reverse a string: ");
    puts(strrev(a));

    // copy a string in the other string
    printf("This the copy of a string: ");
    puts(strcpy(a,b));

    // Merge to strings
    printf("This is the merge of string c and d: ");
    puts(strcat(c,d));

    //to compare of two strings
    printf("This is compare two strings: ")
    if(strcmp(a,b)==0){
        printf("these strings are same");
    }
    else{
       printf("these strings are not same");
    }





}
