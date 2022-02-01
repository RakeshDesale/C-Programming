# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char jw[30],st[30];
    int i,j,count=0;
    scanf("%s %s",jw,st);
    for(i=0;jw[i];i++){
        for(j=0;st[j];j++){
            if(jw[i]==st[j])
                count++;
        }
    }
    printf("%d",count);
    return 0;
}
