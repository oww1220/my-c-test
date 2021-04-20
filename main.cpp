//#include <iostream>
//using namespace std;


#include <stdio.h>
#include <string.h>
#include <cstring>
#include <math.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일



int StringPointer(char *s);

int main() {
    
    char aTable[26] = "abcdefghijklmnopqrstuvwxy";
    int cTable[25]={0};
    char *inputString = (char *)malloc(sizeof(char) * 101);
    scanf("%s", inputString);

    for(int i=0; i < StringPointer(inputString);i++){
        for(int j=0; j<sizeof(aTable)-1;j++){
            //printf("%c %c\n", inputString[i] , aTable[j]);
            if(inputString[i] == aTable[j]) {
                //printf("%d\n", j);
                if(cTable[j] > 0) cTable[j]=i;
                //break;
            }
            else {
                if(cTable[j] != -1) {
                    cTable[j] = cTable[j];
                }
                else{
                    cTable[j]=-1;
                }
                
            }
        }
        
    }

    for(int i=0; i<25;i++){
        printf("%d ", cTable[i]);
    }



    free(inputString);

    return 0;
}

int StringPointer(char *s)
{
    int len = 0;
    while (*s++)
    {
        len++;
    }
    return len;
}


