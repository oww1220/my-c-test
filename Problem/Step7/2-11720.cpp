//#include <iostream>
//using namespace std;


#include <stdio.h>
#include <string.h>
#include <cstring>
#include <math.h>



int main() {

    int n, sum=0;
    scanf("%d", &n);

    char array[n]={0};
    scanf("%s", array);

    for(int i=0;i<n;i++){
        sum += (int)array[i] - 48;
    }

    printf("%d", sum);

    return 0;
}



