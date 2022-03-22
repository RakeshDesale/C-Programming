# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[99],n,i,b[999]={0},count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        b[arr[i]]++;
    for(i=0;i<999;i++){
        if(b[i]>=2)
            count++;        
    }
    printf("%d",count);
    return 0;
}
