# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,arr[100],i = 0,j,temp,len,flag = 1;
    scanf("%d",&n);
    while(n != 0){
        arr[i++] = n%10;
        n = n/10;
    }
    len = i;
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
        if(arr[i+1] - arr[i]>2){
            flag = 0;
            break;
        }
    }
    printf((flag==1)?"Yes":"No");
    return 0;
}
