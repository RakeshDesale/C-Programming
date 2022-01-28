# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int diff(int [],int);

int main() {
    int n,arr[20],i,res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    res=diff(arr,n);
    if(res<0){
        printf("%d",abs(res));
    }
    else
        printf("%d",res);
    return 0;
}

int diff(int arr[], int n){
    int i,sumeven=0,sumodd=0,res;
    for (i=0;i<n;i++){
        if(arr[i]%2==0)
            sumeven=sumeven+arr[i];
        else
            sumodd=sumodd+arr[i];
    }
    res=sumeven-sumodd;
    return res;
}
