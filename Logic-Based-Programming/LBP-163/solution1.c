# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int uniqueNumber(int [], int);

int main() {
    int n,arr[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d",uniqueNumber(arr,n));
    return 0;
}

int uniqueNumber(int arr[], int n){
    int i,j,count;
    for(i=0;i<n;i++){
        count = 0;
        for(j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j])
                count++;
        }
        if(count == 0)
            return arr[i];
    }
    return 0;
}
