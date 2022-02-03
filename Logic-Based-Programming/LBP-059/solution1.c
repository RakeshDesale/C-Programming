# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[30],b[30],ch;
    int i,j;
    scanf("%s %s",a,b);
    for(i=0;a[i];i++){
        for(j=i+1;a[j];j++){
            if(a[i]>a[j]){
                ch=a[i];
                a[i]=a[j];
                a[j]=ch;
            }
        }
    }
    for(i=0;b[i];i++){
        for(j=i+1;b[j];j++){
            if(b[i]>b[j]){
                ch=b[i];
                b[i]=b[j];
                b[j]=ch;
            }
        }
    }
    printf((strcmp(a,b)==0)?"true":"false");
    return 0;
}
