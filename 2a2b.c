#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void generateRandom(char *str){
    int digits[10];  // 用來存放 0-9 的數字
    int i;

    // 初始化數字列表為 0-9
    for (i = 0; i < 10; i++) {
        digits[i] = i;
    }

    // 隨機打亂數字
    for (i = 0; i < 10; i++) {
        // i~9
        int j = rand() % (10 - i) + i;
        //swap
        int temp = digits[i];
        digits[i] = digits[j];
        digits[j] = temp;
    }

    // 選取前 4 個數字作為結果
    for (i = 0; i < 4; i++) {
        str[i] = digits[i] + '0';  // 將數字轉換為字符
    }

    str[4] = '\0';  // 設置字串結束符
}

void guess(char *answer)
{   
    char guessNumber[5];
    int a =0;
    int b = 0;
    while (true)
    {
        if(a==4&&b==0){
            printf("congrats!!");
            break;
        }
        else {
             a=0;
             b=0;
             printf("please enter your number:\n");
             scanf("%4s",guessNumber);
            //  printf("your guess number is %s\n",guessNumber);
             int count=4;
             for (int i = 0; i < count; i++)
             {  
                if(guessNumber[i]==answer[i]){
                    a++;
                }
                else {
                    int singleNumber=guessNumber[i];
                    for (int j=0;j<count;j++){
                      if(singleNumber==answer[j]){
                        b++;
                      }
                    }
                }
             }
             printf("%dA%dB\n",a,b);
        }
    }
}

void main()
{
    char str[5];
    generateRandom(str);
    // printf("the answer is :%s \n",str);
    guess(str);
}