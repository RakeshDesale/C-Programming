# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int allParamTrue(int [], int);

int main() {
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf(allParamTrue(arr,n)?"true":"false");
    return 0;
}

int allParamTrue(int arr[], int n){
    int i,flag = 1;
    for(i=0;i<n;i++){
        if(arr[i]==0){
            flag = 0;
            break;
        }
    }
    return flag;
}
