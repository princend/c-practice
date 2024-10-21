#include <stdio.h>
#include <string.h>

struct Flight
{
    char flightNo[10];
    char airline[30];
    char origin[4], destination[4];
    int frequency, sitCapacity;
    double duration;
};

typedef struct Flight Flight;

void ex13_9()
{
    Flight EK367;
    EK367.frequency = 100;
    strcpy(EK367.flightNo, "EK367");
    printf("%d\n", EK367.frequency);
}

void ex13_10()
{
    Flight EK366 = {"EK366", "", "DXB", "TPE", 100, 100, 1.5};
    printf("%s\n", EK366.flightNo);
}

void ex13_13()
{
    Flight EK367 = {"EK367", "", "DXB", "TPE", 100, 100, 1.5};
    Flight *r = &EK367;
    printf("%s\n", r->flightNo);
    printf("%s\n", (*r).flightNo);
}

void ex13_16()
{
    Flight Emirates[10];
    strcpy(Emirates[0].flightNo, "EK367");
    strcpy(Emirates[1].flightNo, "EK362");
    strcpy(Emirates[2].flightNo, "EK361");

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", Emirates[i].flightNo);
    }
}

void put_flightNo(Flight *F,char flightNoList[][6],int size){
    for (int i = 0; i < size; i++)
    {
        strcpy(F[i].flightNo, flightNoList[i]);
    }
}
void ex13_17()
{
    char EmiratesFlightInfo[3][6] = {"EK367", "EK362", "EK361"};
    Flight Emirates[10];
    put_flightNo(Emirates,EmiratesFlightInfo,3);
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", Emirates[i].flightNo);
    }
    
}

struct Airlines{ 
    char airline[10];
    Flight fight[10];
};

typedef struct Airlines Airlines;


void stringcopy(char *_Destination, const char *_Source){
    strcpy(_Destination,_Source);
}

void ex13_18(){
    Airlines Emirates;
    stringcopy(Emirates.airline,"Emirates");
    // strcpy(Emirates.airline,"Emirates");
    strcpy(Emirates.fight[0].flightNo,"EK367");
    printf(Emirates.airline);
    printf("\n");
    printf("%s\n",Emirates.fight[0].flightNo);
}



void main()
{
    // ex13_10();
    // ex13_13();
    // ex13_16();
    // ex13_17();
    ex13_18();
}