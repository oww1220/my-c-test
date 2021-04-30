//#include <iostream>
//using namespace std;


#include <stdio.h>
#include <string.h>
#include <cstring>
#include <math.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <ctype.h>

int rev(int N); 

int main() {

    int a, b;

    scanf("%d %d", &a,  &b);
    if(rev(a) > rev(b)){
        printf("%d", rev(a));
    }
    else{
        printf("%d", rev(b));
    }

    return 0;
}

int rev(int n) {
    int result=0;
    for(;n!=0;){
        result *=10;
        result += (n%10);
        n = n/10;
    }
    return result;
}

