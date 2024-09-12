#include <stdio.h>

void main(){
    int total=0;
    int product1_price=12;
    int product2_price=200;
    total+=product1_price;
    total+=product2_price;

    printf("%d",total);

    float discount = 0.5;
    printf("Discount %f \n",discount);
}