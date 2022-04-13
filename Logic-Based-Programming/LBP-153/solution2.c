# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int numberOfPlots(int [], int);

int main() {
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d",numberOfPlots(arr,n));
    return 0;
}

int numberOfPlots(int arr[], int n){
    int i,j,count = 0;
    for(i=0;i<n;i++){
        for(j=1;j<=arr[i];j++){
            if(j*j==arr[i])
                count++;
        }
    }
    return count;
}
