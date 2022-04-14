# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[100],n,sd,ed,i;
    scanf("%d",&n);
    scanf("%d %d",&sd,&ed);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        if(abs(arr[i])>=sd && abs(arr[i])<=ed)
            printf("%d ",arr[i]);
    }
    if(arr[i]==n && (abs(arr[i])<=sd && abs(arr[i])>=ed))
        printf("-1");
    return 0;
}
