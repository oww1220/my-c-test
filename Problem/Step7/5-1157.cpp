//#include <iostream>
//using namespace std;


#include <stdio.h>
#include <string.h>
#include <cstring>
#include <math.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <ctype.h>

int main() {

    int maxNum=0, curNum=0, overlap=0;
    char inputString[1000001]={0};
    char aTable[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char result;

    scanf("%s", inputString);

    for(int j=0; j<sizeof(aTable)-1;j++){
        curNum = 0;
        for(int i=0;i<strlen(inputString);i++){
            if(aTable[j] == toupper(inputString[i])) {
                curNum++;
            }
        }
    
        //printf("%d %d ", curNum , maxNum);
        if(maxNum == curNum && j>0 && maxNum>0 && curNum>0) {
            overlap++;
            result = '?';
        }

        if(maxNum < curNum) {
            overlap = 0;
            result = aTable[j];
            maxNum = curNum;
        }

        //printf("%c %d\n", result, overlap);
        
    }

    printf("%c", result);
    



    return 0;
}

