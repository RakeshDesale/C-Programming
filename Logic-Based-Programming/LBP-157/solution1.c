# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int digit7Present(int);

int main() {
    int arr[100],n,i,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        if(digit7Present(arr[i])){
            flag=1;
            break;
        }
    }
    printf((flag==1)?"Boom!":"there is no 7 in the array");
    return 0;
}

int digit7Present(int n){
    while(n!=0){
        if(n%10==7)
            return 1;
        n=n/10;
    }
    return 0;
}
