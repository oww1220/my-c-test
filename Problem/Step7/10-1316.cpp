//#include <iostream>
//using namespace std;


#include <stdio.h>
#include <string.h>
#include <cstring>
#include <math.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <ctype.h>


int main() {

    int n, result=0, cnt=0, flag=1, resultFlag=1;
    char inputString[101]={0};

    scanf("%d", &n);

    for(int i=0;i<n;i++){
        scanf("%s", inputString);
        for(int j=0;j<strlen(inputString);j++){
            
            for(int t=(j+1);t<strlen(inputString);t++){
                //printf("%c %c %d %d %d \n", inputString[j], inputString[t], cnt, flag, resultFlag);
                if(inputString[j] == inputString[t]) {
                    if(flag == 0 && cnt !=0) resultFlag = 0;
                    flag = 1;
                }
                else {
                    flag = 0;
                }
                cnt++;
            }

            cnt=0;
            
        }
        if(resultFlag == 1) result++;
        
        flag=1;
        resultFlag=1;
    }

    printf("%d", result);


    return 0;
}



