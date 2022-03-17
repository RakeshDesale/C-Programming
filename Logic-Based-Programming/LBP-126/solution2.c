# Another Approach

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[99],n,i,loc,ele;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&loc);
    scanf("%d",&ele);
    for(i=0;i<n;i++){
        if(i==loc){
            arr[i]=ele;
            break;
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
