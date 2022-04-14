# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int kShortExeTime(int [], int, int);

int main() {
    int arr[100],n,i,k;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d",kShortExeTime(arr,n,k));
    return 0;
}

int kShortExeTime(int arr[], int n, int k){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[k-1];
}
