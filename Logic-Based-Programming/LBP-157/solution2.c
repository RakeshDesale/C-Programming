# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[100],n,i,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        while(arr[i]!=0){
            if(arr[i]%10==7){
                flag=1;
                break;
            }
            arr[i] = arr[i]/10;
        }
    }
    printf((flag==1)?"Boom!":"there is no 7 in the array");
    return 0;
}
