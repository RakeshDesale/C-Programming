# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,arr[100],i,j,k,temp,even[50],odd[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    j = 0,k = 0;
    for(i=0;i<n;i++){
        if(arr[i]%2 == 0)
            even[j++] = arr[i];
        else
            odd[k++] = arr[i];
    }
    for(i=0;i<n/2;i++)
        printf("%d %d ",even[i],odd[i]);
    return 0;
}
