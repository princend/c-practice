#include <stdio.h>
#include <stdlib.h>

int fib(int count){
    // 0,1,1,2,3,5,8,13
    if(count==0){
        return 0;
    }
    else if(count==1){
        return 1;
    }
    else {
       return fib(count-1)+fib(count-2);
    }
 
}

void main(int argc , char *argv[])
{
  int count = atoi(argv[1]);
  int result = fib(count);
  printf("result is %d\n",result);
}

