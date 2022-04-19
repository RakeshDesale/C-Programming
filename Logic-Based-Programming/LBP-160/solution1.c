# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int digitIn(int, int);

int main() {
    int arr[100],n,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++){
        while(arr[i]!=0){
            if(digitIn(arr[i]%10,arr[i+1])){
                count++;
                break;
            }
            arr[i] = arr[i]/10;
        }
    }
    printf((count==n-1)?"true":"false");
    return 0;
}

int digitIn(int d, int n){
    while(n!=0){
        if(n%10==d)
            return 1;
        n = n/10;
    }
    return 0;
}
