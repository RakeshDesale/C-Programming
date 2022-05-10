# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int countUnchanged(int [], int[], int);

int main() {
    int n,arr[100],b[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        b[i] = arr[i];
    }
    printf("%d",countUnchanged(arr,b,n));
    return 0;
}

int countUnchanged(int arr[], int b[], int n){
    int i,j,temp,count = 0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=0;i<n;i++){
        if(arr[i] == b[i])
            count++;
    }
    return count;
}
