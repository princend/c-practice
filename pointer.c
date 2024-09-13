# include <stdio.h>

void main(){
    char ssss='s';
    char aaaa='a';
    char ssaa[]="sa";
    char textStr[]="this is a test";
    
    char *address = textStr;
    printf("%c \n",*((char *)(address+3)));
    *((char *)(address+3))='q';
    printf("%s",textStr);
    FILE *file;
    file = fopen("text.txt","w+");
    fwrite(&ssss,1,sizeof(ssss),file);
    fclose(file);
}