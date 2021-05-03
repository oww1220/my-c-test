//#include <iostream>
//using namespace std;


#include <stdio.h>
#include <string.h>
#include <cstring>
#include <math.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <ctype.h>


int main() {

    int result=0;
    char inputString[101]={0};

    scanf("%s", inputString);

    for(int i=0;i<strlen(inputString);i++){
        //printf("%c ", inputString[i]);
        if(
            (inputString[i] == 'c' && ( inputString[i+1] == '=' || inputString[i+1] == '-')) ||
            ((inputString[i] == 's' || inputString[i] == 'z') &&  inputString[i+1] == '=') ||
            ((inputString[i] == 'l' || inputString[i] == 'n') &&  inputString[i+1] == 'j') ||
            (inputString[i] == 'd' &&  inputString[i+1] == '-')
        ) {
            result++;
            i++;
        }
        else if(inputString[i] == 'd' &&  inputString[i+1] == 'z'&& inputString[i+2] == '='){
            result++;
            i +=2;
        }
        else {
            result++;
        }
    }

    printf("%d", result);

    /* //다른풀이
    char S[100], num;
    scanf("%s", S);
    num = strlen(S);

    for (int i = 0; i < strlen(S); i++) {
        if (S[i] == '=' || S[i] == '-') {
            num -= 1;
            if (S[i - 1] == 'z' && S[i - 2] == 'd') num -= 1;
        }
        if (S[i] == 'n' && S[i + 1] == 'j') num -= 1;
        if (S[i] == 'l' && S[i + 1] == 'j') num -= 1;
    }
    printf("%d", num);
    */
    

    return 0;
}



