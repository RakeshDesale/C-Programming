# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,arr[30],i,sumeven=0,sumodd=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        if(arr[i]%2==0)
            sumeven=sumeven+arr[i];
        else
            sumodd=sumodd+arr[i];
    }
    printf("%d",abs(sumeven-sumodd));
    return 0;
}
