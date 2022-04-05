# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int lowest2Sum(int [], int);

int main() {
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d",lowest2Sum(arr,n));
    return 0;
}

int lowest2Sum(int arr[], int n){
    int i,j,temp,sum=0;
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
        if(arr[i]>0){
            sum = arr[i]+arr[i+1];
            break;
        }
    }
    return sum;
}
