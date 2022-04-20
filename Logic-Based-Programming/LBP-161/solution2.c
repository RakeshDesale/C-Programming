# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[100],b[100],c[200],n1,n2,i,j,temp,count=0;
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
    j=0;
    for(i=0;i<n1;i++)
        c[j++] = a[i];
    for(i=0;i<n2;i++)
        c[j++] = b[i];
    for(i=0;i<(n1+n2);i++){
        for(j=i+1;j<(n1+n2);j++){
            if(c[i]>c[j]){
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for(i=0;i<(n1+n2);i++){
        if(c[i]+1==c[i+1])
            count++;
    }
    printf((count==(n1+n2)-1)?"true":"false");
    return 0;
}
