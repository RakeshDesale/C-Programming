# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float arrAvg(char []);

int main() {
    char arr[100];
    scanf("%s",arr);
    printf("%.2f",arrAvg(arr));
    return 0;
}

float arrAvg(char arr[]){
    int n,i,sum=0;
    float avg;
    n = strlen(arr);
    for(i=0;i<n;i++)
        sum = sum + (arr[i]-96);
    avg = sum/(float)n;
    return avg;
}
