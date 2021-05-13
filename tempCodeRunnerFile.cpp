//#include <iostream>
//using namespace std;


#include <stdio.h>
#include <string.h>
#include <cstring>
#include <math.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <ctype.h>


int main() {

    int n;

    scanf("%d", &n);

    if(n==1) {
        printf("%d", 1);
    }
    else if(7>=n>1) {
        printf("%d", 2);
    }
    else if(19>=n>7) {
        printf("%d", 3);
    }
    else if(37>=n>19) {
        printf("%d", 4);
    }
    else if(61>=n>37) {
        printf("%d", 5);
    }
    else{
        printf("%d", 6);
    }

    return 0;
}



