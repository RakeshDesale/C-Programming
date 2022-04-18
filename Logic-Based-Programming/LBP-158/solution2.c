# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[100],n,i,flag=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++){
        if((arr[i]>0 && arr[i+1]>0) || (arr[i]<0 && arr[i+1]<0)){
            flag = 0;
            break;
        }
    }
    printf((flag)?"true":"false");
    return 0;
}
