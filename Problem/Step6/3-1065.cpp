//#include <iostream>
//using namespace std;


#include <stdio.h>
#include <string.h>
#include <cstring>
#include <math.h>

int d(int n);

int main() {

    int n, result=0, sum=0;
    scanf("%d", &n);

    for(int i=1; i < n+1; i++){
        result=d(i);

        if(result == 1) sum++;
    }
    printf("%d", sum);

    //result=d(n);
    //printf("%d", result);

    return 0;

}

int d(int n) {
    int j = n, count=0, prev=0, cur=0, cal=0, prevcal=0, result=0;
    //printf("%s\n", "start");
    while (1)
    {
        if(j == 0) {
            if(count<=2) result=1;
            break;
        }
        count++;
        cur = j%10;


        cal = prev-cur;
        result = (cal == prevcal)?1:0; 
        //printf("%d \n", result);

        prev = cur;
        prevcal = cal;
        j /= 10;
    }
    //printf("%s\n", "end");

    return result;

};


