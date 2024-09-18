#include <stdio.h>
#include <stdbool.h>

// float divide (){
//     float value1=10;
//     int value2=4;
//     float result =0;
//     result=value1/value2;
//     printf("%f\n",result);
//     return 0;
// }

float calculateCar()
{
    int people = 11;
    int capacity = 5;
    int cars = 0;
    int leftPeople = 0;
    cars = people / capacity;
    leftPeople = people % capacity;
    printf("�ݭn%d�x��\n", cars);
    printf("��%d�H�S�f�쨮\n", leftPeople);
}

float discount()
{
    int total = 0;
    int product1_price = 12;
    int product2_price = 200;
    total += product1_price;
    total += product2_price;
    float discount = 0.5;
}

void coercion()
{
    printf("%d\n", (int)2.1);
}

void conditionPrintf()
{
    if (true)
    {
        printf("true");
    }
}

int add(int a, int b)
{
    printf("%d\n", a + b);
    return 0;
}
int minus(int a, int b)
{
    printf("%d\n", a - b);
    return 0;
}
int product(int a, int b)
{
    printf("%d\n", a * b);
    return 0;
}
int divide(int a, int b)
{
    printf("%d\n", a / b);
    return 0;
}

float sqr(float a)
{
    return a * a;
}

float div(float a, float b)
{
    return a / b;
}

void inlineFn()
{
    inline int hello(void) { printf("hello world\n"); }
    hello();
}

int factorialForLoop(int count){
    int sum=1;
    if(count<=1)return sum;
    for (int i = count; i > 0; i--)
    {
        sum =sum*i;
    }
    printf("%d\n",sum);
    return sum;
    
}

int my_sum(int total){
    if(total<=0){
        return total;
    }
    else {
        return total+my_sum(total-1);
    }
}



void main()
{
    int aaa=my_sum(10);
    printf("%d\n",aaa);
    // factorialForLoop(10);
    // conditionPrintf();
    // add(199,315);
    // minus(623,253);
    // product(365,124);
    // divide(85,17);
    // divide(65,30);

    //     float height=1.68;
    //     float weight = 60;
    //    float bmi=div(weight,sqr(1.68)) ;
    //    printf("%f",bmi);
    //    inlineFn();
    // coercion();
    // calculateCar();
    // divide();
    // printf("Discount %f\n" ,discount);
    // int rect (int a,int b){printf("%d",a*b);};
    // rect(10,4);
}
