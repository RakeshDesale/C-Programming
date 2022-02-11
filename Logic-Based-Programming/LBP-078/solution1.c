# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[20];
    int i,j,k;
    scanf("%s",str);
    for(i=0;str[i];i++){
        for(j=i+1;str[j];j++){
            if(str[i]==str[j]){
                for(k=j;str[k];k++)
                str[k]=str[k+1];
            }
        }
    }
    printf("%s",str);
    return 0;
}
