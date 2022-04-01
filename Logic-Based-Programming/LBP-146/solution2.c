# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[100],n,i,count=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    if(n!=0){
        for(i=0;i<n;i++){
            if(arr[i]<0)
                sum = sum+arr[i];
            else if(arr[i]==0)
                continue;
            else
                count++;
        }
        printf("%d %d",count,sum);
    }
    else
        printf(" ");
    return 0;
}
