//#include <iostream>
//using namespace std;


#include <stdio.h>
#include <string.h>
#include <cstring>
#include <math.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <ctype.h>

int calcNum(char N); 

int main() {

    int result=0;
    char inputString[16]={0};

    scanf("%s", inputString);

    for(int i=0;i<strlen(inputString);i++){
        result +=calcNum(inputString[i]);
    }
    printf("%d ", result);
    

    return 0;
}

int calcNum(char n) {
    int result=0;
    switch (n) {
        case 'A':
        case 'B':
        case 'C':
            result = 3;
            break;

        case 'D':
        case 'E':
        case 'F':
            result = 4;
            break;

        case 'G':
        case 'H':
        case 'I':
            result = 5;
            break;

        case 'J':
        case 'K':
        case 'L':
            result = 6;
            break;

        case 'M':
        case 'N':
        case 'O':
            result = 7;
            break;

        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            result = 8;
            break;

        case 'T':
        case 'U':
        case 'V':
            result = 9;
            break;
        
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            result = 10;
            break;

        default:
            break;
    }

    return result;
}

