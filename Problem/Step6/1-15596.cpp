//#include <iostream>
//using namespace std;


#include <stdio.h>
#include <string.h>
#include <cstring>

long sum(int*a, int n );

int main() {

    int arr[3] = {1, 2, 3};
    int n = 3;

    long result = sum(arr, n);
    
    printf("%ld", result);


    return 0;

}

long sum(int*a, int n ) {
    long result = 0;

    for(int i=0; i < n; i++){
        result = result + a[i];
    }

    return result;
}
