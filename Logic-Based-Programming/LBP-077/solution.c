# Using Recursion

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(char *, char *);
void permute(char *, int, int);

int main() {
    char str[50];
    scanf("%s",str);
    permute(str,0,strlen(str)-1);
    return 0;
}

void swap(char *x, char *y){
    char t;
    t=*x;
    *x=*y;
    *y=t;
}

void permute(char *p, int left, int right){
    int i;
    if(left==right)
        printf("%s ",p);
    else{
        for(i=left;i<=right;i++){
            swap((p+left),(p+i));
            permute(p,left+1,right);
            swap((p+left),(p+i));
        }
    }
}
