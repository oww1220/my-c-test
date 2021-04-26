//#include <iostream>
//using namespace std;


#include <stdio.h>
#include <string.h>
#include <cstring>
#include <math.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일


int main() {

    int T, R;
    char inputString[21]={0};
    
    scanf("%d", &T);

    for(int i=0; i<T;i++){
        scanf("%d %s", &R, inputString);

        for(int j=0;j<strlen(inputString);j++){
            for(int k=0;k<R;k++){
                printf("%c", inputString[j]);
            }
        }
        printf("\n");
    }



    return 0;
}

