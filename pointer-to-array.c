#include <stdio.h>

int myMax(int a[],int s ){
    int max=0,i;
    for (i=0;i<s;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}

int *my_max(int a[],int s ){
    int *max=a,i;
    for (i=0;i<s;i++){
        if(a[i]>*max){
            max=&a[i];
        }
    }
    return max;
}

void ex7_4(){
    int arr1[5]={10,20,30,40,50};
    int arr2[2]={3,5};
    int a =5;
    int *arrOfPtr[4]={arr1,&a,arr1+3};
    arrOfPtr[3]=arr2;
    for (int i=0;i<4;i++){
        printf("%d\t%p\n",*arrOfPtr[i],arrOfPtr[i]);
    }
}

void ex7_9(){
     int arr[4]={10,20,30,40};
     printf("arr : %p\n",arr);
     printf("arr+1 : %p\n",arr+1);
     printf("&arr+1 : %p\n",&arr+1);
     printf("*(&arr+1) : %p\n",*(&arr+1));
     printf("length = *(&arr+1) -arr : %d\n",*(&arr+1)-arr);
}

void ex7_10(){
    int arr[4]={10,20,30,40};
    int *p=arr;
    printf("p :%p\n",p);
    printf("p+1 :%p\n",p+1);
    int (*q)[4]=&arr;
    printf("q : %p\n",*q);
    printf("q+1 : %p\n",*(q+1));
    printf("length = *(q+1)-*(q+0):%d\n",*(q+1)-*(q+0));
}

void main(){
//  int arr[5]={51,41,311,211,110};
//  int size =5;
//  printf("%d\n",myMax(arr,size));
//  printf("%d\n",*my_max(arr,size));
//   ex7_4();
// ex7_9();
ex7_10();
}





