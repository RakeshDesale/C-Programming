# Optimized Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int diff(int [], int);

int main() {
    int n,arr[30],res,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    res=diff(arr,n);
    printf("%d",abs(res));
    return 0;
}

int diff(int arr[], int n){
    int sumeven=0,sumodd=0,i;
    for(i=0;i<n;i++){
        if(arr[i]%2==0)
            sumeven=sumeven+arr[i];
        else
            sumodd=sumodd+arr[i];
    }
    return sumeven-sumodd;
}
