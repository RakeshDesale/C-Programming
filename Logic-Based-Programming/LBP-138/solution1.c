# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[99],n,i,counteven=0,countodd=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        if(arr[i]%2==0)
            counteven++;
        else
            countodd++;
    }
    printf("%d \n%d",counteven,countodd);
    return 0;
}
