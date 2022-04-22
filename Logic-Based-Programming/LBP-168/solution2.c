# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int arrPali(int [], int);

int main() {
    int n, arr[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf(arrPali(arr,n)?"true":"false");
    return 0;
}

int arrPali(int arr[], int n){
    int low,high,flag = 1;
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
    return flag == 1;
}
