# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[99],n,i,j,temp,d,factsum,fact,sum1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);   
    for(i=0;i<n;i++){
        temp = arr[i];
        factsum=0;
        while(temp!=0){
            fact=1;
            d = temp % 10;
            for(j=1;j<=d;j++){
                fact = fact*j;
            }
            factsum = factsum + fact;
            temp = temp / 10;
        }
        if(arr[i]==factsum)
            sum1 = sum1+arr[i];
    }
    printf("%d",sum1);
    return 0;
}
