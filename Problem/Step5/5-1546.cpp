#include <stdio.h>
int main()
{   
    int n;
    double value, max, sum=0, result;
    scanf("%d", &n);

    double array[n];

    for(int i = 0;i<n;i++){
        scanf("%lf", &value);
        array[i] = value;
    };

    max = array[0];
    for(int i = 0;i<n;i++){
        if(array[i] > max) max=array[i];
    };

    for(int i = 0;i<n;i++){
        sum = sum + ((array[i]/max)*100);
    };
    result = sum/n;
    
    printf("%lf", result);
    

    return 0;
}