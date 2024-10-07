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

void main(){
 int arr[5]={51,41,311,211,110};
 int size =5;
 printf("%d\n",myMax(arr,size));
 printf("%d\n",*my_max(arr,size));
}


