# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, arr[100],i,low,high,flag=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    low = 0;
    high = n-1;
    while(low<=high){
        if(arr[low]!=arr[high]){
            flag = 0;
            break;
        }
        low++;
        high--;
    }
    printf((flag==1)?"true":"false");
    return 0;
}
