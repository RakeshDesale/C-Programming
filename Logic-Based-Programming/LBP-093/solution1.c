# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[30];
    int i,j,flag;
    scanf("%s",str);
    for(i=0;str[i];i++){
        flag=1;
        for(j=0;str[j];j++){
            if(i!=j && str[i]==str[j]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("%c",str[i]);
            break;
        }
    }
    return 0;
}
