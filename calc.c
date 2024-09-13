#include <stdio.h>
#include <stdbool.h>

float divide (){
    float value1=10;
    int value2=4;
    float result =0;
    result=value1/value2;
    printf("%f\n",result);
    return 0;
}

float calculateCar(){
    int people =11;
    int capacity=5;
    int cars=0;
    int leftPeople=0;
    cars = people/capacity;
    leftPeople =people % capacity;
    printf("需要%d台車\n",cars);
    printf("剩%d人沒搭到車\n",leftPeople);
}

float discount(){
    int total=0;
    int product1_price=12;
    int product2_price=200;
    total+=product1_price;
    total+=product2_price;
    float discount = 0.5;
}

void coercion(){
    printf("%d\n",(int) 2.1);
}

void conditionPrintf(){
    if(true){
        printf("true");
    }
}


void main(){
    conditionPrintf();
    // coercion();
    // calculateCar();
    // divide();
    // printf("Discount %f \n",discount);
}



