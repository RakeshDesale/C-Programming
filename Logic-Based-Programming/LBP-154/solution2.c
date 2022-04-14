# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void distanceOfEmp(int [], int, int, int);

int main() {
    int arr[100],n,sd,ed,i;
    scanf("%d",&n);
    scanf("%d %d",&sd,&ed);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    distanceOfEmp(arr,n,sd,ed);
    return 0;
}

void distanceOfEmp(int arr[], int n, int sd, int ed){
    int i;
    for(i=0;i<n;i++){
        if(abs(arr[i])>=sd && abs(arr[i])<=ed)
            printf("%d ",arr[i]);
    }
    if(arr[i]==n && (abs(arr[i])<=sd && abs(arr[i])>=ed))
        printf("-1");
}
