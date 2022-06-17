# Using Function and Using abs Method

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isJackpot(int [], int);

int main() {
    int n,arr[100],i = 0;
    scanf("%d",&n);
    while(n != 0){
        arr[i++] = n%10;
        n = n/10;
    }
    printf((isJackpot(arr,i))?"Yes":"No");
    return 0;
}

int isJackpot(int arr[], int i){
    int j,temp,len = i,flag = 1;
    for(i=0;i<len;i++){
        for(j=i+1;j<len;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=0;i<len-1;i++){
        if(abs(arr[i] - arr[i+1])>2){
            flag = 0;
            break;
        }
    }
    return flag;
}
