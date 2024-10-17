#include <stdio.h>

void ex10_1(){
    char c;
    printf("pls enter a char\n");
    scanf("%c",&c);
    printf("the char is %c\n",c);
}

void lab10_2(){
    printf("123\a");
    printf("123\b");
    printf("123\\");
}

void lab10_3(){
    char a='a';
    char z='z';
    char A='A';
    char Z='Z';
    char zero='0';
    char nine='9';
    printf("%s\n",a>z?"true":"false");
    printf("%s\n",A>Z?"true":"false");
    printf("%s\n",zero>nine?"true":"false");
    printf("%s\n",a>nine?"true":"false");
    printf("%s\n",a>A?"true":"false");
}

void main(){
    // ex10_1();
    // lab10_2();
    lab10_3();

}