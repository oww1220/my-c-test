//#include <iostream>
//using namespace std;


#include <stdio.h>
#include <string.h>
#include <cstring>
#include <math.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <ctype.h>

int main() {

    int flag=1, result=0;
    char inputString[1000001]={0};

    scanf("%[^\n]s", inputString);

    for(int i=0;i<strlen(inputString);i++) {

        if(inputString[i] == ' '){
            flag=1;
        }
        else{
            if(flag==1) result++;
            flag=0;
        }
    }
    printf("%d", result);
    return 0;
}

