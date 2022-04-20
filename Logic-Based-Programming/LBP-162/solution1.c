# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,arr[100],i,temp,count, count1 = 0, specialCount = 0,ele;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        count = 0;
        temp = arr[i];
        while(temp!=0){
            if(temp%10 == 5)
                count++;
            temp = temp/10;
        }
        if(count1 <= count){
            count1 = count;
            ele = arr[i];
        }
        if(count == 0)
            specialCount++;
    }
    if(specialCount != n)
        printf("%d",ele);
    else
        printf("%d",arr[0]);
    return 0;
}
