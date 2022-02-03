# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isAnagram(char[], char[]);

int main() {
    char a[30],b[30];
    scanf("%s %s",a,b);
    printf((isAnagram(a,b))?"true":"false");
    return 0;
}

int isAnagram(char a[], char b[]){
    char ch;
    int i,j;
    for (i=0;a[i];i++){
        for (j=i+1;a[j];j++){
            if(a[i]>a[j]){
                ch=a[i];
                a[i]=a[j];
                a[j]=ch;
            }
        }
    }
    
    for (i=0;b[i];i++){
        for (j=i+1;b[j];j++){
            if(b[i]>b[j]){
                ch=b[i];
                b[i]=b[j];
                b[j]=ch;
            }
        }
    }
    
    return (strcmp(a,b)==0)?1:0;
}
