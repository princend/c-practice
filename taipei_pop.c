#include <stdio.h>

#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE_SIZE 1024

int ex9_10()
{
    char filename[] = "taipei-pop.csv";
    FILE *csv = fopen(filename, "r");

    // test whether the file can be opened
    if (!csv)
    {
        fprintf(stderr, "failed to open file for reading\n");
        return 1;
    }

    // read data line-by-line
    // set a pointer for processing data
    // move the starting pointer
    char line[MAX_LINE_SIZE];
    char *result = NULL;
    fseek(csv, 0, SEEK_SET);
    int date[430][2] = {0};
    char disa[430][20];
    int popa[430][8] = {0};
    int i, j, row = 0;
    // use fgets to fetch line data in csv
    while (fgets(line, MAX_LINE_SIZE, csv) != NULL)
    {
        // separate data with delimiter
        result = strtok(line, ",");
        // parsing data
        for (i = 0; i < 11; i++)
        {
            if (i < 2)
            {   
                date[row][i] = atoi(result);
            }
            else if (i == 2)
            {
                // printf("%s%d\t", result, strlen(result)+1);
                strcpy(disa[row], result);
            }
            else
            {
                popa[row][i - 3] = atoi(result);
            }
            result = strtok(NULL, ",");
        }
        row++;
    }
    // close the file
    fclose(csv);
    // print it out for testing
    // for (i = 0; i < 430; i++)
    // {
    //     for (j = 0; j < 11; j++)
    //     {
    //         if (j < 2)
    //         {
    //             printf("%d\t", date[i][j]);
    //         }
    //         else if (j == 2)
    //         {
    //             printf("%10s\t", disa[i]);
    //         }
    //         else
    //         {
    //             printf("%7d\t", popa[i][j - 3]);
    //         }
    //     }
    //     printf("\n");
    // }
    
     
    for (int i = 0; i < 430; i++)
    {  
       printf("%d\t", date[i][0]);    
       printf("%d\t", date[i][1]);    
       printf("%10s\t", disa[i]); 
       if(i==0){
        printf("men proportion\t");
        printf("women proportion\t");
       }
       else{
        // printf("%d\t",popa[i][6]);
        // printf("%f\t",atof(disa[i][6]));
        float men=((float)popa[i][6]/popa[i][5])*100;
        float women=((float)popa[i][7]/popa[i][5])*100;
        printf("%7f\t",men);
        printf("%7f\t",women);
       }
       printf("\n");
    }
    
}


void main(){
ex9_10();

}