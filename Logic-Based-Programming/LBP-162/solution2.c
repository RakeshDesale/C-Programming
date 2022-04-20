# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int contains(int);

int main() {
    int n,arr[100],i,x,count = 0, specialCount = 0,ele;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        x = contains(arr[i]);
        if(count <= x){
            count = x;
            ele = arr[i];
        }
        if(x == 0)
            specialCount++;
    }
    if(specialCount != n)
        printf("%d",ele);
    else
        printf("%d",arr[0]);
    return 0;
}

int contains(int n){
    int count = 0;
    while(n!=0){
        if(n%10 == 5)
            count++;
        n = n/10;
    }
    return count;
}
