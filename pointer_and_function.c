#include <stdio.h>

int foo(int val,int *addr){
    printf("val = %d (address:%p)\n",val,addr);
}

int ex6_3(){
    printf("Ex 6-3: Pointer to Array Elements\n");
    int arr[5]={5,10,15,20,0};
    int *p =&arr[0];

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",*(p+i));
    }
    
    return 0;
}

int ex6_4(int *p ,int sizeofArray){
    for (int i =0;i<sizeofArray ; i++){
        printf("%d\t",p[i]);
    }
}

int ex6_4_1(int array[] ,int sizeofArray){
    for (int i =0;i<sizeofArray ; i++){
        printf("%d\t",array[i]);
    }
}

int ex6_4_2(int array[10] ,int sizeofArray){
    for (int i =0;i<sizeofArray ; i++){
        printf("%d\t",array[i]);
    }
}

int ex6_6(int *p ,int sizeofArray){
        for (int i =0;i<sizeofArray ; i++){
        printf("%d\t",p[i]);
    }
}

int ex6_8(){
    int a=5;
    int *p=&a;
    int **q=&p;
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%p\n",&p);
    printf("%d\n",**q);
    printf("%p\n",&q);
}

int main(){
    ex6_8();
    // int arr3[100]={0};
    // ex6_6(arr3,100);
    // int arr[10]={0,1,2,3,4,5,6,7,8,9};
    // ex6_4(arr,10);
    // ex6_4_1(arr,10);
    // ex6_4_2(arr,10);
    // ex6_3();
    // printf("Ex 6-2:Passing Pointer into Function\n");
    // int a=5;
    // foo(a,&a);
    // printf("a=%d (address:%p)\n",a,&a);
}